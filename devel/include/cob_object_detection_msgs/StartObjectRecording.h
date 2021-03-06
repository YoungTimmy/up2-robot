// Generated by gencpp from file cob_object_detection_msgs/StartObjectRecording.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_STARTOBJECTRECORDING_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_STARTOBJECTRECORDING_H

#include <ros/service_traits.h>


#include <cob_object_detection_msgs/StartObjectRecordingRequest.h>
#include <cob_object_detection_msgs/StartObjectRecordingResponse.h>


namespace cob_object_detection_msgs
{

struct StartObjectRecording
{

typedef StartObjectRecordingRequest Request;
typedef StartObjectRecordingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StartObjectRecording
} // namespace cob_object_detection_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_object_detection_msgs::StartObjectRecording > {
  static const char* value()
  {
    return "ed3bc845528a8aed5f5a16c86665300a";
  }

  static const char* value(const ::cob_object_detection_msgs::StartObjectRecording&) { return value(); }
};

template<>
struct DataType< ::cob_object_detection_msgs::StartObjectRecording > {
  static const char* value()
  {
    return "cob_object_detection_msgs/StartObjectRecording";
  }

  static const char* value(const ::cob_object_detection_msgs::StartObjectRecording&) { return value(); }
};


// service_traits::MD5Sum< ::cob_object_detection_msgs::StartObjectRecordingRequest> should match 
// service_traits::MD5Sum< ::cob_object_detection_msgs::StartObjectRecording > 
template<>
struct MD5Sum< ::cob_object_detection_msgs::StartObjectRecordingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_object_detection_msgs::StartObjectRecording >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::StartObjectRecordingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_object_detection_msgs::StartObjectRecordingRequest> should match 
// service_traits::DataType< ::cob_object_detection_msgs::StartObjectRecording > 
template<>
struct DataType< ::cob_object_detection_msgs::StartObjectRecordingRequest>
{
  static const char* value()
  {
    return DataType< ::cob_object_detection_msgs::StartObjectRecording >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::StartObjectRecordingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_object_detection_msgs::StartObjectRecordingResponse> should match 
// service_traits::MD5Sum< ::cob_object_detection_msgs::StartObjectRecording > 
template<>
struct MD5Sum< ::cob_object_detection_msgs::StartObjectRecordingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_object_detection_msgs::StartObjectRecording >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::StartObjectRecordingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_object_detection_msgs::StartObjectRecordingResponse> should match 
// service_traits::DataType< ::cob_object_detection_msgs::StartObjectRecording > 
template<>
struct DataType< ::cob_object_detection_msgs::StartObjectRecordingResponse>
{
  static const char* value()
  {
    return DataType< ::cob_object_detection_msgs::StartObjectRecording >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::StartObjectRecordingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_STARTOBJECTRECORDING_H
