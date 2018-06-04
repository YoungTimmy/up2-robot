// Generated by gencpp from file cob_object_detection_msgs/AcquireObjectImageResult.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGERESULT_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_object_detection_msgs
{
template <class ContainerAllocator>
struct AcquireObjectImageResult_
{
  typedef AcquireObjectImageResult_<ContainerAllocator> Type;

  AcquireObjectImageResult_()
    {
    }
  AcquireObjectImageResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> const> ConstPtr;

}; // struct AcquireObjectImageResult_

typedef ::cob_object_detection_msgs::AcquireObjectImageResult_<std::allocator<void> > AcquireObjectImageResult;

typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageResult > AcquireObjectImageResultPtr;
typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageResult const> AcquireObjectImageResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_object_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/home/up2/catkin_ws/src/common_msgs/sensor_msgs/msg'], 'actionlib_msgs': ['/home/up2/catkin_ws/src/common_msgs/actionlib_msgs/msg'], 'geometry_msgs': ['/home/up2/catkin_ws/src/mapping_msgs/msg/geometry_msgs/msg'], 'cob_object_detection_msgs': ['/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_object_detection_msgs/AcquireObjectImageResult";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The results\n\
";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcquireObjectImageResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::cob_object_detection_msgs::AcquireObjectImageResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGERESULT_H
