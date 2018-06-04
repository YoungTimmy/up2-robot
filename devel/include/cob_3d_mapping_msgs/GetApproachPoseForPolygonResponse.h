// Generated by gencpp from file cob_3d_mapping_msgs/GetApproachPoseForPolygonResponse.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_GETAPPROACHPOSEFORPOLYGONRESPONSE_H
#define COB_3D_MAPPING_MSGS_MESSAGE_GETAPPROACHPOSEFORPOLYGONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseArray.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct GetApproachPoseForPolygonResponse_
{
  typedef GetApproachPoseForPolygonResponse_<ContainerAllocator> Type;

  GetApproachPoseForPolygonResponse_()
    : approach_poses()  {
    }
  GetApproachPoseForPolygonResponse_(const ContainerAllocator& _alloc)
    : approach_poses(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _approach_poses_type;
  _approach_poses_type approach_poses;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetApproachPoseForPolygonResponse_

typedef ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<std::allocator<void> > GetApproachPoseForPolygonResponse;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse > GetApproachPoseForPolygonResponsePtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse const> GetApproachPoseForPolygonResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_3d_mapping_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/home/up2/catkin_ws/src/common_msgs/sensor_msgs/msg'], 'actionlib_msgs': ['/home/up2/catkin_ws/src/common_msgs/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/up2/catkin_ws/src/mapping_msgs/msg/geometry_msgs/msg'], 'cob_object_detection_msgs': ['/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg'], 'cob_3d_mapping_msgs': ['/home/up2/catkin_ws/devel/share/cob_3d_mapping_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_3d_mapping_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "19bb4815c71649ba6ce299aa4a70b51e";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x19bb4815c71649baULL;
  static const uint64_t static_value2 = 0x6ce299aa4a70b51eULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/GetApproachPoseForPolygonResponse";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseArray approach_poses\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseArray\n\
# An array of poses with a header for global reference.\n\
\n\
Header header\n\
\n\
Pose[] poses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.approach_poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetApproachPoseForPolygonResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse_<ContainerAllocator>& v)
  {
    s << indent << "approach_poses: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.approach_poses);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_GETAPPROACHPOSEFORPOLYGONRESPONSE_H
