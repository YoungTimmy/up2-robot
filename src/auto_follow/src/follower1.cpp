#include <ros/ros.h> 
#include <serial/serial.h>  //ROS已经内置了的串口包 
#include <std_msgs/String.h> 
#include <std_msgs/Char.h> 
#include <sstream>
#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

//int d;
//const char c;
void DW1000_data_CallBack(const std_msgs::String msg)
{
    ROS_INFO("I heard: [%s] ",msg);
    for(int i = 0;i<8;i++)
        printf("msg[%d]: %x\n",i,msg.data[i]);

   //c = msg;
    //d = atoi(s);
    //int d = atoi(msg);
    //printf("hello world:%d\n",d);
}




int main(int argc,char ** argv)
{
    ros::init(argc,argv,"follower");

    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("DW1000_data",10000,DW1000_data_CallBack);

    ros::spin();

    return 0;

}