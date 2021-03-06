// Generated by gencpp from file cob_3d_mapping_msgs/ShapeArray.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_SHAPEARRAY_H
#define COB_3D_MAPPING_MSGS_MESSAGE_SHAPEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <cob_3d_mapping_msgs/Shape.h>

namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct ShapeArray_
{
  typedef ShapeArray_<ContainerAllocator> Type;

  ShapeArray_()
    : header()
    , shapes()  {
    }
  ShapeArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , shapes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >::other >  _shapes_type;
  _shapes_type shapes;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> const> ConstPtr;

}; // struct ShapeArray_

typedef ::cob_3d_mapping_msgs::ShapeArray_<std::allocator<void> > ShapeArray;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::ShapeArray > ShapeArrayPtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::ShapeArray const> ShapeArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc723f28be387c6f3061c2c124641aac";
  }

  static const char* value(const ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc723f28be387c6fULL;
  static const uint64_t static_value2 = 0x3061c2c124641aacULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/ShapeArray";
  }

  static const char* value(const ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# An array of poses with a header for global reference.\n\
\n\
Header header\n\
\n\
cob_3d_mapping_msgs/Shape[] shapes\n\
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
MSG: cob_3d_mapping_msgs/Shape\n\
Header header\n\
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

  static const char* value(const ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.shapes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShapeArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::ShapeArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "shapes[]" << std::endl;
    for (size_t i = 0; i < v.shapes.size(); ++i)
    {
      s << indent << "  shapes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cob_3d_mapping_msgs::Shape_<ContainerAllocator> >::stream(s, indent + "    ", v.shapes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_SHAPEARRAY_H
