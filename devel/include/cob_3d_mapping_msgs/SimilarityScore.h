// Generated by gencpp from file cob_3d_mapping_msgs/SimilarityScore.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_SIMILARITYSCORE_H
#define COB_3D_MAPPING_MSGS_MESSAGE_SIMILARITYSCORE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_3d_mapping_msgs
{
template <class ContainerAllocator>
struct SimilarityScore_
{
  typedef SimilarityScore_<ContainerAllocator> Type;

  SimilarityScore_()
    : ID(0)
    , prob(0.0)  {
    }
  SimilarityScore_(const ContainerAllocator& _alloc)
    : ID(0)
    , prob(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _ID_type;
  _ID_type ID;

   typedef float _prob_type;
  _prob_type prob;





  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> const> ConstPtr;

}; // struct SimilarityScore_

typedef ::cob_3d_mapping_msgs::SimilarityScore_<std::allocator<void> > SimilarityScore;

typedef boost::shared_ptr< ::cob_3d_mapping_msgs::SimilarityScore > SimilarityScorePtr;
typedef boost::shared_ptr< ::cob_3d_mapping_msgs::SimilarityScore const> SimilarityScoreConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_3d_mapping_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/home/up2/catkin_ws/src/common_msgs/sensor_msgs/msg'], 'actionlib_msgs': ['/home/up2/catkin_ws/src/common_msgs/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/up2/catkin_ws/src/mapping_msgs/msg/geometry_msgs/msg'], 'cob_object_detection_msgs': ['/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg'], 'cob_3d_mapping_msgs': ['/home/up2/catkin_ws/devel/share/cob_3d_mapping_msgs/msg', '/home/up2/catkin_ws/src/cob_perception_common/cob_3d_mapping_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bae66c7dce1ddf1ccfcfb042f78f22aa";
  }

  static const char* value(const ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbae66c7dce1ddf1cULL;
  static const uint64_t static_value2 = 0xcfcfb042f78f22aaULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_3d_mapping_msgs/SimilarityScore";
  }

  static const char* value(const ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 ID\n\
float32 prob\n\
";
  }

  static const char* value(const ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ID);
      stream.next(m.prob);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SimilarityScore_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_3d_mapping_msgs::SimilarityScore_<ContainerAllocator>& v)
  {
    s << indent << "ID: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ID);
    s << indent << "prob: ";
    Printer<float>::stream(s, indent + "  ", v.prob);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_SIMILARITYSCORE_H
