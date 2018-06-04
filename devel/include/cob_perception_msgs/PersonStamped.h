// Generated by gencpp from file cob_perception_msgs/PersonStamped.msg
// DO NOT EDIT!


#ifndef COB_PERCEPTION_MSGS_MESSAGE_PERSONSTAMPED_H
#define COB_PERCEPTION_MSGS_MESSAGE_PERSONSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <cob_perception_msgs/Person.h>

namespace cob_perception_msgs
{
template <class ContainerAllocator>
struct PersonStamped_
{
  typedef PersonStamped_<ContainerAllocator> Type;

  PersonStamped_()
    : header()
    , person()  {
    }
  PersonStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , person(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::cob_perception_msgs::Person_<ContainerAllocator>  _person_type;
  _person_type person;





  typedef boost::shared_ptr< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> const> ConstPtr;

}; // struct PersonStamped_

typedef ::cob_perception_msgs::PersonStamped_<std::allocator<void> > PersonStamped;

typedef boost::shared_ptr< ::cob_perception_msgs::PersonStamped > PersonStampedPtr;
typedef boost::shared_ptr< ::cob_perception_msgs::PersonStamped const> PersonStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_perception_msgs::PersonStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "08b504f30560aab069643e77a4cb4556";
  }

  static const char* value(const ::cob_perception_msgs::PersonStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x08b504f30560aab0ULL;
  static const uint64_t static_value2 = 0x69643e77a4cb4556ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_perception_msgs/PersonStamped";
  }

  static const char* value(const ::cob_perception_msgs::PersonStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# origin from  url = https://github.com/wg-perception/people/tree/hydro-devel/people_msgs\n\
\n\
Header header\n\
cob_perception_msgs/Person person\n\
\n\
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
MSG: cob_perception_msgs/Person\n\
#This message is used to describe a person\n\
 \n\
string              name				#id of a person\n\
string              detector			#used device for detection (scan, camera)\n\
geometry_msgs/Pose  position			#position in space\n\
geometry_msgs/Point velocity			#speed\n\
\n\
cob_perception_msgs/Skeleton skeleton	#assigned skeleton to a tracked person\n\
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
MSG: cob_perception_msgs/Skeleton\n\
# This messages is used to describe a skeleton and defines joints of a tracked person\n\
\n\
# the same enum as defined in NiteCEnums.h of the Nite body tracker\n\
uint8 JOINT_HEAD = 0\n\
uint8 JOINT_NECK = 1\n\
uint8 JOINT_LEFT_SHOULDER = 2\n\
uint8 JOINT_RIGHT_SHOULDER = 3\n\
uint8 JOINT_LEFT_ELBOW = 4\n\
uint8 JOINT_RIGHT_ELBOW = 5\n\
uint8 JOINT_LEFT_HAND = 6\n\
uint8 JOINT_RIGHT_HAND = 7\n\
uint8 JOINT_TORSO = 8\n\
uint8 JOINT_LEFT_HIP = 9\n\
uint8 JOINT_RIGHT_HIP = 10\n\
uint8 JOINT_LEFT_KNEE = 11\n\
uint8 JOINT_RIGHT_KNEE = 12\n\
uint8 JOINT_LEFT_FOOT = 13\n\
uint8 JOINT_RIGHT_FOOT = 14\n\
uint8 JOINT_NUMBER = 15\n\
\n\
geometry_msgs/Pose[] joints\n\
";
  }

  static const char* value(const ::cob_perception_msgs::PersonStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.person);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PersonStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_perception_msgs::PersonStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_perception_msgs::PersonStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "person: ";
    s << std::endl;
    Printer< ::cob_perception_msgs::Person_<ContainerAllocator> >::stream(s, indent + "  ", v.person);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PERCEPTION_MSGS_MESSAGE_PERSONSTAMPED_H
