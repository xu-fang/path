// Generated by gencpp from file uwb_driver/uwbRangeComm.msg
// DO NOT EDIT!


#ifndef UWB_DRIVER_MESSAGE_UWBRANGECOMM_H
#define UWB_DRIVER_MESSAGE_UWBRANGECOMM_H

#include <ros/service_traits.h>


#include <uwb_driver/uwbRangeCommRequest.h>
#include <uwb_driver/uwbRangeCommResponse.h>


namespace uwb_driver
{

struct uwbRangeComm
{

typedef uwbRangeCommRequest Request;
typedef uwbRangeCommResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct uwbRangeComm
} // namespace uwb_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uwb_driver::uwbRangeComm > {
  static const char* value()
  {
    return "112b5681119ecc68ece4e0e294e8f5cf";
  }

  static const char* value(const ::uwb_driver::uwbRangeComm&) { return value(); }
};

template<>
struct DataType< ::uwb_driver::uwbRangeComm > {
  static const char* value()
  {
    return "uwb_driver/uwbRangeComm";
  }

  static const char* value(const ::uwb_driver::uwbRangeComm&) { return value(); }
};


// service_traits::MD5Sum< ::uwb_driver::uwbRangeCommRequest> should match 
// service_traits::MD5Sum< ::uwb_driver::uwbRangeComm > 
template<>
struct MD5Sum< ::uwb_driver::uwbRangeCommRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uwb_driver::uwbRangeComm >::value();
  }
  static const char* value(const ::uwb_driver::uwbRangeCommRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uwb_driver::uwbRangeCommRequest> should match 
// service_traits::DataType< ::uwb_driver::uwbRangeComm > 
template<>
struct DataType< ::uwb_driver::uwbRangeCommRequest>
{
  static const char* value()
  {
    return DataType< ::uwb_driver::uwbRangeComm >::value();
  }
  static const char* value(const ::uwb_driver::uwbRangeCommRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uwb_driver::uwbRangeCommResponse> should match 
// service_traits::MD5Sum< ::uwb_driver::uwbRangeComm > 
template<>
struct MD5Sum< ::uwb_driver::uwbRangeCommResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uwb_driver::uwbRangeComm >::value();
  }
  static const char* value(const ::uwb_driver::uwbRangeCommResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uwb_driver::uwbRangeCommResponse> should match 
// service_traits::DataType< ::uwb_driver::uwbRangeComm > 
template<>
struct DataType< ::uwb_driver::uwbRangeCommResponse>
{
  static const char* value()
  {
    return DataType< ::uwb_driver::uwbRangeComm >::value();
  }
  static const char* value(const ::uwb_driver::uwbRangeCommResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UWB_DRIVER_MESSAGE_UWBRANGECOMM_H
