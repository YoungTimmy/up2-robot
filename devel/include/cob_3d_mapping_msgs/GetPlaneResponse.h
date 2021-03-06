// Generated by gencpp from file cob_3d_mapping_msgs/GetPlaneResponse.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_GETPLANERESPONSE_H
#define COB_3D_MAPPING_MSGS_MESSAGE_GETPLANERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/PointCloud2.h>
#include <std_msgs/Float32.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct GetPlaneResponse_
{
  typedef GetPlaneResponse_<ContainerAllocator> Type;

  GetPlaneResponse_()
    : pc()
    , hull()
    , plane_coeffs()  {
    }
  GetPlaneResponse_(const ContainerAllocator& _alloc)
    : pc(_alloc)
    , hull(_alloc)
    , plane_coeffs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _pc_type;
  _pc_type pc;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _hull_type;
  _hull_type hull;

   typedef std::vector< ::std_msgs::Float32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Float32_<ContainerAllocator> >::other >  _plane_coeffs_type;
  _plane_coeffs_type plane_coeffs;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPlaneResponse_

typedef ::cob_3d_mapping_msgs::GetPlaneResponse_<std::allocator<void> > GetPlaneResponse;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetPlaneResponse > GetPlaneResponsePtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::GetPlaneResponse const> GetPlaneResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e11c006bc7fabf06881bc7d0de7ba820";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe11c006bc7fabf06ULL;
  static const uint64_t static_value2 = 0x881bc7d0de7ba820ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/GetPlaneResponse";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/PointCloud2 pc\n\
sensor_msgs/PointCloud2 hull\n\
std_msgs/Float32[] plane_coeffs\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
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
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
================================================================================\n\
MSG: std_msgs/Float32\n\
float32 data\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pc);
      stream.next(m.hull);
      stream.next(m.plane_coeffs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPlaneResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::GetPlaneResponse_<ContainerAllocator>& v)
  {
    s << indent << "pc: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.pc);
    s << indent << "hull: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.hull);
    s << indent << "plane_coeffs[]" << std::endl;
    for (size_t i = 0; i < v.plane_coeffs.size(); ++i)
    {
      s << indent << "  plane_coeffs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "    ", v.plane_coeffs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_GETPLANERESPONSE_H
