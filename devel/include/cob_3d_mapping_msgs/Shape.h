// Generated by gencpp from file cob_3d_mapping_msgs/Shape.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_SHAPE_H
#define COB_3D_MAPPING_MSGS_MESSAGE_SHAPE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <sensor_msgs/PointCloud2.h>
#include <std_msgs/ColorRGBA.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct Shape_
{
  typedef Shape_<ContainerAllocator> Type;

  Shape_()
    : header()
    , type(0)
    , id(0)
    , weight(0.0)
    , pose()
    , params()
    , points()
    , vertices()
    , color()
    , holes()  {
    }
  Shape_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(0)
    , id(0)
    , weight(0.0)
    , pose(_alloc)
    , params(_alloc)
    , points(_alloc)
    , vertices(_alloc)
    , color(_alloc)
    , holes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int8_t _type_type;
  _type_type type;

   typedef int32_t _id_type;
  _id_type id;

   typedef float _weight_type;
  _weight_type weight;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _params_type;
  _params_type params;

   typedef std::vector< ::sensor_msgs::PointCloud2_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _vertices_type;
  _vertices_type vertices;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _color_type;
  _color_type color;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _holes_type;
  _holes_type holes;



  enum {
    POLYGON = 0u,
    LINE = 1u,
    CURVED = 2u,
    MESH = 3u,
    OTHER = 4u,
    CYLINDER = 5u,
  };


  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> const> ConstPtr;

}; // struct Shape_

typedef ::cob_3d_mapping_msgs::Shape_<std::allocator<void> > Shape;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Shape > ShapePtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::Shape const> ShapeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5fc6a3556290a571009cfc613a557d0";
  }

  static const char* value(const ::cob_3d_mapping_msgs::Shape_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5fc6a3556290a57ULL;
  static const uint64_t static_value2 = 0x1009cfc613a557d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/Shape";
  }

  static const char* value(const ::cob_3d_mapping_msgs::Shape_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
uint8 POLYGON=0\n\
uint8 LINE=1\n\
uint8 CURVED=2\n\
uint8 MESH=3\n\
uint8 OTHER=4\n\
uint8 CYLINDER=5\n\
# potential extensions: SPHERE, CYLINDER, BOX\n\
\n\
byte type\n\
int32 id\n\
float32 weight\n\
\n\
geometry_msgs/Pose pose\n\
\n\
# define shape parameters\n\
# for plane\n\
# normal vector = params[0],params[1],params[2]\n\
#	d = params[3]\n\
# for line\n\
# direction vector = params[0],params[1],params[2]\n\
# for curved\n\
# 3 for plane, 6 for polynom 2nd degree, ...\n\
#\n\
#for cylinder\n\
# symmetry axis = params[0],params[1],params[2]\n\
# radius	= params[3]\n\
# min and max height (rel to origin) = params[4], params[5]\n\
#\n\
float64[] params\n\
\n\
sensor_msgs/PointCloud2[] points\n\
\n\
#### define mesh ####\n\
# each three entries form a triangle; indices of points are stored\n\
int32[] vertices\n\
\n\
#geometry_msgs/Point32 centroid\n\
std_msgs/ColorRGBA color\n\
bool[] holes\n\
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
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::Shape_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.id);
      stream.next(m.weight);
      stream.next(m.pose);
      stream.next(m.params);
      stream.next(m.points);
      stream.next(m.vertices);
      stream.next(m.color);
      stream.next(m.holes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Shape_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::Shape_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.type);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "weight: ";
    Printer<float>::stream(s, indent + "  ", v.weight);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "params[]" << std::endl;
    for (size_t i = 0; i < v.params.size(); ++i)
    {
      s << indent << "  params[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.params[i]);
    }
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "vertices[]" << std::endl;
    for (size_t i = 0; i < v.vertices.size(); ++i)
    {
      s << indent << "  vertices[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.vertices[i]);
    }
    s << indent << "color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.color);
    s << indent << "holes[]" << std::endl;
    for (size_t i = 0; i < v.holes.size(); ++i)
    {
      s << indent << "  holes[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.holes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_SHAPE_H
