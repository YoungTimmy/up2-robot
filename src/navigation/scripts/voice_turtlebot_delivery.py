#!/usr/bin/env python
#coding=utf-8
import rospy
import re
from geometry_msgs.msg import Twist, Pose, Point, Quaternion, PoseWithCovarianceStamped
from std_msgs.msg import String
import math
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal
import actionlib
from actionlib_msgs.msg import *
import time #for sleep()
import roslib
from kobuki_msgs.msg import PowerSystemEvent, AutoDockingAction, AutoDockingGoal, SensorState #for kobuki base power and auto docking
from kobuki_msgs.msg import ButtonEvent #for kobuki base's b0 button
from sensor_msgs.msg import BatteryState #for netbook battery
import math #for comparing if Kobuki's power has changed using fabs
#from sound_play.libsoundplay import SoundClient



class turtlebot_delivery:


    ####### OPTIONVAL VALUES TO CHANGE ##########
    kobuki_base_max_charge = 155
    #we're using the extended battery.  Your battery may have a different max charge value.  The maximum charge for kobuki base can be determined by running:
    #rostopic echo /mobile_base/sensors/core
    #and viewing the "battery" value.  This value is used to determine kobuki's battery status %.
    ####### END OPTIONVAL VALUES TO CHANGE ##########

    # defaults
    move_base = False # _init_ converts this to a MoveBaseAction that is used to set the goals
    battery_is_low = False # is kobuki's battery low?
    battery_is_low_netbook = False # is the notebook's battery low?
    netbook_previous_battery_level = 100 # what was the previous netbook battery level (used to know if it's changed)
    kobuki_previous_battery_level = 1000 #1000 isn't possible.  Just a large fake # so the script starts believing the battery is fine
    cannot_move_until_b0_is_pressed = False # should TurtleBot stay still until B0 is pressed (e.g. while the person is brewing coffee)?


    def __init__(self):

        #initialize ros node
        rospy.init_node('voice_tissue_turtlebot', anonymous=False)

        self.goal_sent = False

	#self.sc = SoundClient()
        #self.path_to_sounds = "~/catkin_ws/src/navigation/sounds/"

        # What to do if shut down (e.g. Ctrl-C or failure)
        rospy.on_shutdown(self.shutdown)

        # Tell the action client that we want to spin a thread by default
    	self.move_base = actionlib.SimpleActionClient("move_base", MoveBaseAction)
    	rospy.loginfo("Wait for the action server to come up")

    	# Allow up to 30 seconds for the action server to come up
    	self.move_base.wait_for_server(rospy.Duration(30))

        # Subscribe to the /recognizer/output topic to receive voice commands.
        rospy.Subscriber('xfspeech', String, self.speech_callback)

        #monitor Kobuki's power and charging status.  If an event occurs (low battery, charging, not charging etc) call function SensorPowerEventCallback
    	rospy.Subscriber("/mobile_base/sensors/core",SensorState,self.SensorPowerEventCallback)

    	#monitor netbook's battery power
    	#rospy.Subscriber("/laptop_charge/",BatteryState,self.NetbookPowerEventCallback)

    	#to avoid TurtleBot from driving to another pose while someone is making coffee ... TurtleBot isn't allowed to move until the person presses the B0 button.  To implement this we need to monitor the kobuki button events
    	rospy.Subscriber("/mobile_base/events/button",ButtonEvent,self.ButtonEventCallback)

        rospy.loginfo("Ready to receive voice commands")


    def goto(self, pos, quat):

        #don't move until b0 is pressed!
    	#if(self.cannot_move_until_b0_is_pressed):
    		#rospy.loginfo("Waiting for button B0 to be pressed.")
    		#time.sleep(2)
    		#return True

        #How is power looking? If low go recharge first at the docking station.
    	if(self.INeedPower()):
    		return True

        # Send a goal
        self.goal_sent = True
	goal = MoveBaseGoal()
	goal.target_pose.header.frame_id = 'map'
	goal.target_pose.header.stamp = rospy.Time.now()
        goal.target_pose.pose = Pose(Point(pos['x'], pos['y'], 0.000),
                                     Quaternion(quat['r1'], quat['r2'], quat['r3'], quat['r4']))

	    # Start moving
        self.move_base.send_goal(goal)

	    # Allow TurtleBot up to 600 seconds to complete task
	success = self.move_base.wait_for_result(rospy.Duration(600))

        state = self.move_base.get_state()
        result = False


        if success and state == GoalStatus.SUCCEEDED:
            rospy.loginfo("Hooray, reached the desired pose!  Press B0 to allow TurtleBot to come back.")
	    #self.sc.playWave(self.path_to_sounds+"ship_bell.wav")
            #tell TurtleBot not to move until the customer presses B0
            #self.cannot_move_until_b0_is_pressed = True
            result = True
        else:
            self.move_base.cancel_goal()

        self.goal_sent = False
        return result


    def ButtonEventCallback(self,data):
    	if ( data.button == ButtonEvent.Button0 ) :
    		#self.cannot_move_until_b0_is_pressed = False
		#rospy.loginfo(self.cannot_move_until_b0_is_pressed)
            	positionBase = {'x':12.8927616806, 'y' : -9.08996204642}
            	quaternionBase = {'r1' : 0.000, 'r2' : 0.000, 'r3' :  0.694453396189, 'r4' :  0.719537685268}

            	self.goto(positionBase, quaternionBase)


    def INeedPower(self):
    	#are we currently charging at the docking station?  If yes only continue if we're not fully charged
	
    	if(self.battery_is_low or self.battery_is_low_netbook):
    		rospy.loginfo("I'm low on battery")
    		time.sleep(30)
    		return True

    	return False


    def SensorPowerEventCallback(self,data):
    	#kobuki's batttery value tends to bounce up and down 1 constantly so only report if difference greater than 1
    	if(math.fabs(int(data.battery) - self.kobuki_previous_battery_level) > 2):
    		rospy.loginfo("Kobuki's battery is now: " + str(round(float(data.battery) / float(self.kobuki_base_max_charge) * 100)) + "%")
    		self.kobuki_previous_battery_level = int(data.battery)

    	if ( round(float(data.battery) / float(self.kobuki_base_max_charge) * 100) < 50) :
    		if(not self.battery_is_low):
    			rospy.loginfo("Kobuki battery is low")
    		self.battery_is_low = True
    	elif ( round(float(data.battery) / float(self.kobuki_base_max_charge) * 100) > 60): #the logic of not using the same value (e.g. 50) for both the battery is low & battery is fine is that it'll leave and immediatly return for more power.  The reason why we don't use == 100 is that we hope that proactive charging between coffee deliveries will charge it soon and we don't want people waiting.
    		if(self.battery_is_low):
    			rospy.loginfo("Kobuki battery is fine")
    		self.battery_is_low = False


    def NetbookPowerEventCallback(self,data):
    	#has the netbook's power level changed?
    	if(int(data.percentage) != self.netbook_previous_battery_level):
    		rospy.loginfo("Notebook's battery is now: " + str(data.percentage) + "%")
    		self.netbook_previous_battery_level = int(data.percentage)
    	#is the netbook's power low?
    	if(int(data.percentage) < 50): #50 is the percent of total power
    		self.battery_is_low_netbook = True
    	elif(int(data.percentage) > 60): #the logic of not using the same value (e.g. 50) for both the battery is low & battery is fine is that it'll leave and immediatly return for more power.  The reason why we don't use == 100 is that we hope that proactive charging between coffee deliveries will charge it soon and we don't want people waiting.
    		self.battery_is_low_netbook = False


    def speech_callback(self, msg):

        command = str(msg.data)
        #command = msg.data

        # Log the command to the screen
        rospy.loginfo("Command: " + command)

        # self-explanatory
        if command == '送咖啡。':
            # Customize the following values so they are appropriate for your location
            position515 = {'x':11.2459103291, 'y' : -7.16648472495}
            quaternion515 = {'r1' : 0.000, 'r2' : 0.000, 'r3' :0.748863119969, 'r4' : 0.662724699669}

            self.goto(position515, quaternion515)


	elif command == '接水。':
            # Customize the following values so they are appropriate for your location
            position519 = {'x':-8.39049894981, 'y' : -11.1620943508}
            quaternion519 = {'r1' : 0.000, 'r2' : 0.000, 'r3' :0.998127572619, 'r4' : 0.0611665658526}

            self.goto(position519, quaternion519)  

	elif command == '送纸。':
            # Customize the following values so they are appropriate for your location
            positionToilet = {'x':20.6509939496, 'y' : 0.767618822697}
            quaternionToilet = {'r1' : 0.000, 'r2' : 0.000, 'r3' :0.0212588071969, 'r4' : 0.999774006022}

            self.goto(positionToilet, quaternionToilet)        

	else:
            return


    def shutdown(self):
        if self.goal_sent:
            self.move_base.cancel_goal()
        rospy.loginfo("Stop")
        rospy.sleep(1)



if __name__=="__main__":
    try:
        turtlebot_delivery()
        rospy.spin()


    except rospy.ROSInterruptException:
        rospy.loginfo("Ctrl-C caught. Quitting")
