// Generated by gencpp from file msgs_demo/Echos.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_ECHOS_H
#define MSGS_DEMO_MESSAGE_ECHOS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace msgs_demo
{
template <class ContainerAllocator>
struct Echos_
{
  typedef Echos_<ContainerAllocator> Type;

  Echos_()
    : header()
    , front_left(0)
    , front_center(0)
    , front_right(0)
    , rear_left(0)
    , rear_center(0)
    , rear_right(0)  {
    }
  Echos_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , front_left(0)
    , front_center(0)
    , front_right(0)
    , rear_left(0)
    , rear_center(0)
    , rear_right(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _front_left_type;
  _front_left_type front_left;

   typedef uint16_t _front_center_type;
  _front_center_type front_center;

   typedef uint16_t _front_right_type;
  _front_right_type front_right;

   typedef uint16_t _rear_left_type;
  _rear_left_type rear_left;

   typedef uint16_t _rear_center_type;
  _rear_center_type rear_center;

   typedef uint16_t _rear_right_type;
  _rear_right_type rear_right;





  typedef boost::shared_ptr< ::msgs_demo::Echos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::Echos_<ContainerAllocator> const> ConstPtr;

}; // struct Echos_

typedef ::msgs_demo::Echos_<std::allocator<void> > Echos;

typedef boost::shared_ptr< ::msgs_demo::Echos > EchosPtr;
typedef boost::shared_ptr< ::msgs_demo::Echos const> EchosConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::Echos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::Echos_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgs_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msgs_demo': ['/home/yj/tutorial_ws/src/ROS-Academy-for-Beginners/msgs_demo/msg', '/home/yj/tutorial_ws/devel/share/msgs_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::Echos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::Echos_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::Echos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::Echos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::Echos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::Echos_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::Echos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41b4a21d92f5fd9f5c8f7dc9c07e154a";
  }

  static const char* value(const ::msgs_demo::Echos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41b4a21d92f5fd9fULL;
  static const uint64_t static_value2 = 0x5c8f7dc9c07e154aULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::Echos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/Echos";
  }

  static const char* value(const ::msgs_demo::Echos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::Echos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint16 front_left\n\
uint16 front_center\n\
uint16 front_right\n\
uint16 rear_left\n\
uint16 rear_center\n\
uint16 rear_right\n\
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
";
  }

  static const char* value(const ::msgs_demo::Echos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::Echos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.front_left);
      stream.next(m.front_center);
      stream.next(m.front_right);
      stream.next(m.rear_left);
      stream.next(m.rear_center);
      stream.next(m.rear_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Echos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::Echos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgs_demo::Echos_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "front_left: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.front_left);
    s << indent << "front_center: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.front_center);
    s << indent << "front_right: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.front_right);
    s << indent << "rear_left: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rear_left);
    s << indent << "rear_center: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rear_center);
    s << indent << "rear_right: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rear_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_ECHOS_H
