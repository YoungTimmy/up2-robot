;; Auto-generated. Do not edit!


(when (boundp 'cob_object_detection_msgs::AcquireObjectImageGoal)
  (if (not (find-package "COB_OBJECT_DETECTION_MSGS"))
    (make-package "COB_OBJECT_DETECTION_MSGS"))
  (shadow 'AcquireObjectImageGoal (find-package "COB_OBJECT_DETECTION_MSGS")))
(unless (find-package "COB_OBJECT_DETECTION_MSGS::ACQUIREOBJECTIMAGEGOAL")
  (make-package "COB_OBJECT_DETECTION_MSGS::ACQUIREOBJECTIMAGEGOAL"))

(in-package "ROS")
;;//! \htmlinclude AcquireObjectImageGoal.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass cob_object_detection_msgs::AcquireObjectImageGoal
  :super ros::object
  :slots (_object_name _reset_image_counter _pose _sdh_joints ))

(defmethod cob_object_detection_msgs::AcquireObjectImageGoal
  (:init
   (&key
    ((:object_name __object_name) "")
    ((:reset_image_counter __reset_image_counter) nil)
    ((:pose __pose) (instance geometry_msgs::PoseStamped :init))
    ((:sdh_joints __sdh_joints) (let (r) (dotimes (i 0) (push (instance geometry_msgs::PoseStamped :init) r)) r))
    )
   (send-super :init)
   (setq _object_name (string __object_name))
   (setq _reset_image_counter __reset_image_counter)
   (setq _pose __pose)
   (setq _sdh_joints __sdh_joints)
   self)
  (:object_name
   (&optional __object_name)
   (if __object_name (setq _object_name __object_name)) _object_name)
  (:reset_image_counter
   (&optional __reset_image_counter)
   (if __reset_image_counter (setq _reset_image_counter __reset_image_counter)) _reset_image_counter)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:sdh_joints
   (&rest __sdh_joints)
   (if (keywordp (car __sdh_joints))
       (send* _sdh_joints __sdh_joints)
     (progn
       (if __sdh_joints (setq _sdh_joints (car __sdh_joints)))
       _sdh_joints)))
  (:serialization-length
   ()
   (+
    ;; string _object_name
    4 (length _object_name)
    ;; bool _reset_image_counter
    1
    ;; geometry_msgs/PoseStamped _pose
    (send _pose :serialization-length)
    ;; geometry_msgs/PoseStamped[] _sdh_joints
    (apply #'+ (send-all _sdh_joints :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _object_name
       (write-long (length _object_name) s) (princ _object_name s)
     ;; bool _reset_image_counter
       (if _reset_image_counter (write-byte -1 s) (write-byte 0 s))
     ;; geometry_msgs/PoseStamped _pose
       (send _pose :serialize s)
     ;; geometry_msgs/PoseStamped[] _sdh_joints
     (write-long (length _sdh_joints) s)
     (dolist (elem _sdh_joints)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _object_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _object_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _reset_image_counter
     (setq _reset_image_counter (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; geometry_msgs/PoseStamped _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;; geometry_msgs/PoseStamped[] _sdh_joints
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _sdh_joints (let (r) (dotimes (i n) (push (instance geometry_msgs::PoseStamped :init) r)) r))
     (dolist (elem- _sdh_joints)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get cob_object_detection_msgs::AcquireObjectImageGoal :md5sum-) "a834da64b488488418ecf10d2737befd")
(setf (get cob_object_detection_msgs::AcquireObjectImageGoal :datatype-) "cob_object_detection_msgs/AcquireObjectImageGoal")
(setf (get cob_object_detection_msgs::AcquireObjectImageGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# The goal
string object_name
bool reset_image_counter
geometry_msgs/PoseStamped pose
geometry_msgs/PoseStamped[] sdh_joints

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

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
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :cob_object_detection_msgs/AcquireObjectImageGoal "a834da64b488488418ecf10d2737befd")


