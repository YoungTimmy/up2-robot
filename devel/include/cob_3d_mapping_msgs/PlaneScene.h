// Generated by gencpp from file cob_3d_mapping_msgs/PlaneScene.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_PLANESCENE_H
#define COB_3D_MAPPING_MSGS_MESSAGE_PLANESCENE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <cob_3d_mapping_msgs/Plane.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct PlaneScene_
{
  typedef PlaneScene_<ContainerAllocator> Type;

  PlaneScene_()
    : header()
    , planes()  {
    }
  PlaneScene_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , planes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::cob_3d_mapping_msgs::Plane_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cob_3d_mapping_msgs::Plane_<ContainerAllocator> >::other >  _planes_type;
  _planes_type planes;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> const> ConstPtr;

}; // struct PlaneScene_

typedef ::cob_3d_mapping_msgs::PlaneScene_<std::allocator<void> > PlaneScene;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::PlaneScene > PlaneScenePtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::PlaneScene const> PlaneSceneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_3d_mapping_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/home/up2/catkin_ws/src/common_msgs/sensor_msgs/msg'], 'actionlib_msgs': ['/home/up2/catkin_ws/src/common_msgs/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/up2/catkin_ws/src/mapping_msgs/msg/geometry_msgs/msg'], 'cob_object_detection_msgs': ['/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg'], 'cob_3d_mapping_msgs': ['/home/up2/catkin_ws/devel/share/cob_3d_mapping_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_3d_mapping_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5aa30c5b0316a946cb91f45ed3f1d963";
  }

  static const char* value(const ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5aa30c5b0316a946ULL;
  static const uint64_t static_value2 = 0xcb91f45ed3f1d963ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/PlaneScene";
  }

  static const char* value(const ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
#summary of planes\n\
Plane[] planes\n\
\n\
#camera of input data\n\
#sensor_msgs/CameraInfo camera_info\n\
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
MSG: cob_3d_mapping_msgs/Plane\n\
#polygons describing hull\n\
#first polygon -> outer hull\n\
Polygon[] polygons\n\
\n\
#pose describing parameters of plane\n\
geometry_msgs/Pose pose\n\
\n\
#number of points\n\
float32 weight\n\
\n\
#averaged color [deprecated to be removed]\n\
std_msgs/ColorRGBA color\n\
\n\
================================================================================\n\
MSG: cob_3d_mapping_msgs/Polygon\n\
#points describing polygon\n\
Point2D[] points\n\
\n\
================================================================================\n\
MSG: cob_3d_mapping_msgs/Point2D\n\
#coordinate on surface\n\
float32 x\n\
float32 y\n\
\n\
#texture cooridante\n\
float32 tex_x\n\
float32 tex_y\n\
\n\
float32 var\n\
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
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.planes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlaneScene_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::PlaneScene_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "planes[]" << std::endl;
    for (size_t i = 0; i < v.planes.size(); ++i)
    {
      s << indent << "  planes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cob_3d_mapping_msgs::Plane_<ContainerAllocator> >::stream(s, indent + "    ", v.planes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_PLANESCENE_H
