; Auto-generated. Do not edit!


(cl:in-package cob_3d_mapping_msgs-msg)


;//! \htmlinclude TableObjectClusterGoal.msg.html

(cl:defclass <TableObjectClusterGoal> (roslisp-msg-protocol:ros-message)
  ((known_objects
    :reader known_objects
    :initarg :known_objects
    :type cob_object_detection_msgs-msg:DetectionArray
    :initform (cl:make-instance 'cob_object_detection_msgs-msg:DetectionArray)))
)

(cl:defclass TableObjectClusterGoal (<TableObjectClusterGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TableObjectClusterGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TableObjectClusterGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_3d_mapping_msgs-msg:<TableObjectClusterGoal> is deprecated: use cob_3d_mapping_msgs-msg:TableObjectClusterGoal instead.")))

(cl:ensure-generic-function 'known_objects-val :lambda-list '(m))
(cl:defmethod known_objects-val ((m <TableObjectClusterGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_3d_mapping_msgs-msg:known_objects-val is deprecated.  Use cob_3d_mapping_msgs-msg:known_objects instead.")
  (known_objects m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TableObjectClusterGoal>) ostream)
  "Serializes a message object of type '<TableObjectClusterGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'known_objects) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TableObjectClusterGoal>) istream)
  "Deserializes a message object of type '<TableObjectClusterGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'known_objects) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TableObjectClusterGoal>)))
  "Returns string type for a message object of type '<TableObjectClusterGoal>"
  "cob_3d_mapping_msgs/TableObjectClusterGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TableObjectClusterGoal)))
  "Returns string type for a message object of type 'TableObjectClusterGoal"
  "cob_3d_mapping_msgs/TableObjectClusterGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TableObjectClusterGoal>)))
  "Returns md5sum for a message object of type '<TableObjectClusterGoal>"
  "81a746b0e990b3cd67733ad5c859eff8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TableObjectClusterGoal)))
  "Returns md5sum for a message object of type 'TableObjectClusterGoal"
  "81a746b0e990b3cd67733ad5c859eff8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TableObjectClusterGoal>)))
  "Returns full string definition for message of type '<TableObjectClusterGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#Trigger Table Object Cluster~%#goal definition~%cob_object_detection_msgs/DetectionArray known_objects~%~%================================================================================~%MSG: cob_object_detection_msgs/DetectionArray~%Header header~%Detection[] detections~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: cob_object_detection_msgs/Detection~%Header header~%string label~%int32 id~%string detector~%float32 score~%Mask mask~%geometry_msgs/PoseStamped pose~%geometry_msgs/Point bounding_box_lwh~%~%================================================================================~%MSG: cob_object_detection_msgs/Mask~%# this message is used to mark where an object is present in an image~%# this can be done either by a roi region on the image (less precise) or a mask (more precise)~%~%Rect roi~%~%# in the case when mask is used, 'roi' specifies the image region and 'mask'~%# (which should be of the same size) a binary mask in that region~%sensor_msgs/Image mask~%~%# in the case there is 3D data available, 'indices' are used to index the ~%# part of the point cloud representing the object~%#pcl/PointIndices indices~%~%================================================================================~%MSG: cob_object_detection_msgs/Rect~%int32 x~%int32 y~%int32 width~%int32 height~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TableObjectClusterGoal)))
  "Returns full string definition for message of type 'TableObjectClusterGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#Trigger Table Object Cluster~%#goal definition~%cob_object_detection_msgs/DetectionArray known_objects~%~%================================================================================~%MSG: cob_object_detection_msgs/DetectionArray~%Header header~%Detection[] detections~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: cob_object_detection_msgs/Detection~%Header header~%string label~%int32 id~%string detector~%float32 score~%Mask mask~%geometry_msgs/PoseStamped pose~%geometry_msgs/Point bounding_box_lwh~%~%================================================================================~%MSG: cob_object_detection_msgs/Mask~%# this message is used to mark where an object is present in an image~%# this can be done either by a roi region on the image (less precise) or a mask (more precise)~%~%Rect roi~%~%# in the case when mask is used, 'roi' specifies the image region and 'mask'~%# (which should be of the same size) a binary mask in that region~%sensor_msgs/Image mask~%~%# in the case there is 3D data available, 'indices' are used to index the ~%# part of the point cloud representing the object~%#pcl/PointIndices indices~%~%================================================================================~%MSG: cob_object_detection_msgs/Rect~%int32 x~%int32 y~%int32 width~%int32 height~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TableObjectClusterGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'known_objects))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TableObjectClusterGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'TableObjectClusterGoal
    (cl:cons ':known_objects (known_objects msg))
))
