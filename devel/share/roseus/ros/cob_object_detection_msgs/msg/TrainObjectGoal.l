;; Auto-generated. Do not edit!


(when (boundp 'cob_object_detection_msgs::TrainObjectGoal)
  (if (not (find-package "COB_OBJECT_DETECTION_MSGS"))
    (make-package "COB_OBJECT_DETECTION_MSGS"))
  (shadow 'TrainObjectGoal (find-package "COB_OBJECT_DETECTION_MSGS")))
(unless (find-package "COB_OBJECT_DETECTION_MSGS::TRAINOBJECTGOAL")
  (make-package "COB_OBJECT_DETECTION_MSGS::TRAINOBJECTGOAL"))

(in-package "ROS")
;;//! \htmlinclude TrainObjectGoal.msg.html


(defclass cob_object_detection_msgs::TrainObjectGoal
  :super ros::object
  :slots (_object_name ))

(defmethod cob_object_detection_msgs::TrainObjectGoal
  (:init
   (&key
    ((:object_name __object_name) "")
    )
   (send-super :init)
   (setq _object_name (string __object_name))
   self)
  (:object_name
   (&optional __object_name)
   (if __object_name (setq _object_name __object_name)) _object_name)
  (:serialization-length
   ()
   (+
    ;; string _object_name
    4 (length _object_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _object_name
       (write-long (length _object_name) s) (princ _object_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _object_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _object_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get cob_object_detection_msgs::TrainObjectGoal :md5sum-) "2f12226348d323c2e5b2031b3da53f1b")
(setf (get cob_object_detection_msgs::TrainObjectGoal :datatype-) "cob_object_detection_msgs/TrainObjectGoal")
(setf (get cob_object_detection_msgs::TrainObjectGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# The goal
string object_name

")



(provide :cob_object_detection_msgs/TrainObjectGoal "2f12226348d323c2e5b2031b3da53f1b")


