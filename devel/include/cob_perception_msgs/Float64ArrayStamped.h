// Generated by gencpp from file cob_perception_msgs/Float64ArrayStamped.msg
// DO NOT EDIT!


#ifndef COB_PERCEPTION_MSGS_MESSAGE_FLOAT64ARRAYSTAMPED_H
#define COB_PERCEPTION_MSGS_MESSAGE_FLOAT64ARRAYSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cob_perception_msgs
{
template <class ContainerAllocator>
struct Float64ArrayStamped_
{
  typedef Float64ArrayStamped_<ContainerAllocator> Type;

  Float64ArrayStamped_()
    : header()
    , data()  {
    }
  Float64ArrayStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> const> ConstPtr;

}; // struct Float64ArrayStamped_

typedef ::cob_perception_msgs::Float64ArrayStamped_<std::allocator<void> > Float64ArrayStamped;

typedef boost::shared_ptr< ::cob_perception_msgs::Float64ArrayStamped > Float64ArrayStampedPtr;
typedef boost::shared_ptr< ::cob_perception_msgs::Float64ArrayStamped const> Float64ArrayStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_perception_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'cob_perception_msgs': ['/home/up2/catkin_ws/src/cob_perception_common/cob_perception_msgs/msg'], 'geometry_msgs': ['/home/up2/catkin_ws/src/mapping_msgs/msg/geometry_msgs/msg'], 'sensor_msgs': ['/home/up2/catkin_ws/src/common_msgs/sensor_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb60495edd59d3fcf90e173153ae8a9a";
  }

  static const char* value(const ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb60495edd59d3fcULL;
  static const uint64_t static_value2 = 0xf90e173153ae8a9aULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_perception_msgs/Float64ArrayStamped";
  }

  static const char* value(const ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64[] data\n\
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
";
  }

  static const char* value(const ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Float64ArrayStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_perception_msgs::Float64ArrayStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PERCEPTION_MSGS_MESSAGE_FLOAT64ARRAYSTAMPED_H
