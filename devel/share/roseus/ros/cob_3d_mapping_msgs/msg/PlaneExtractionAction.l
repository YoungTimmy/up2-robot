;; Auto-generated. Do not edit!


(when (boundp 'cob_3d_mapping_msgs::PlaneExtractionAction)
  (if (not (find-package "COB_3D_MAPPING_MSGS"))
    (make-package "COB_3D_MAPPING_MSGS"))
  (shadow 'PlaneExtractionAction (find-package "COB_3D_MAPPING_MSGS")))
(unless (find-package "COB_3D_MAPPING_MSGS::PLANEEXTRACTIONACTION")
  (make-package "COB_3D_MAPPING_MSGS::PLANEEXTRACTIONACTION"))

(in-package "ROS")
;;//! \htmlinclude PlaneExtractionAction.msg.html


(defclass cob_3d_mapping_msgs::PlaneExtractionAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod cob_3d_mapping_msgs::PlaneExtractionAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance cob_3d_mapping_msgs::PlaneExtractionActionGoal :init))
    ((:action_result __action_result) (instance cob_3d_mapping_msgs::PlaneExtractionActionResult :init))
    ((:action_feedback __action_feedback) (instance cob_3d_mapping_msgs::PlaneExtractionActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; cob_3d_mapping_msgs/PlaneExtractionActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; cob_3d_mapping_msgs/PlaneExtractionActionResult _action_result
    (send _action_result :serialization-length)
    ;; cob_3d_mapping_msgs/PlaneExtractionActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; cob_3d_mapping_msgs/PlaneExtractionActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; cob_3d_mapping_msgs/PlaneExtractionActionResult _action_result
       (send _action_result :serialize s)
     ;; cob_3d_mapping_msgs/PlaneExtractionActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; cob_3d_mapping_msgs/PlaneExtractionActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; cob_3d_mapping_msgs/PlaneExtractionActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; cob_3d_mapping_msgs/PlaneExtractionActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get cob_3d_mapping_msgs::PlaneExtractionAction :md5sum-) "54e2a966f59a0375e770c2dd1d589ce3")
(setf (get cob_3d_mapping_msgs::PlaneExtractionAction :datatype-) "cob_3d_mapping_msgs/PlaneExtractionAction")
(setf (get cob_3d_mapping_msgs::PlaneExtractionAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

PlaneExtractionActionGoal action_goal
PlaneExtractionActionResult action_result
PlaneExtractionActionFeedback action_feedback

================================================================================
MSG: cob_3d_mapping_msgs/PlaneExtractionActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
PlaneExtractionGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: cob_3d_mapping_msgs/PlaneExtractionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#Trigger Plane Extraction
#goal definition

================================================================================
MSG: cob_3d_mapping_msgs/PlaneExtractionActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
PlaneExtractionResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: cob_3d_mapping_msgs/PlaneExtractionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition

================================================================================
MSG: cob_3d_mapping_msgs/PlaneExtractionActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
PlaneExtractionFeedback feedback

================================================================================
MSG: cob_3d_mapping_msgs/PlaneExtractionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
std_msgs/String currentStep

================================================================================
MSG: std_msgs/String
string data

")



(provide :cob_3d_mapping_msgs/PlaneExtractionAction "54e2a966f59a0375e770c2dd1d589ce3")


