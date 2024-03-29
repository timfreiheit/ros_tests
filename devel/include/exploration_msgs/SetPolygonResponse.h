// Generated by gencpp from file exploration_msgs/SetPolygonResponse.msg
// DO NOT EDIT!


#ifndef EXPLORATION_MSGS_MESSAGE_SETPOLYGONRESPONSE_H
#define EXPLORATION_MSGS_MESSAGE_SETPOLYGONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace exploration_msgs
{
template <class ContainerAllocator>
struct SetPolygonResponse_
{
  typedef SetPolygonResponse_<ContainerAllocator> Type;

  SetPolygonResponse_()
    {
    }
  SetPolygonResponse_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetPolygonResponse_

typedef ::exploration_msgs::SetPolygonResponse_<std::allocator<void> > SetPolygonResponse;

typedef boost::shared_ptr< ::exploration_msgs::SetPolygonResponse > SetPolygonResponsePtr;
typedef boost::shared_ptr< ::exploration_msgs::SetPolygonResponse const> SetPolygonResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace exploration_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'exploration_msgs': ['/home/tim/Dokumente/Git/ros_tests/devel/share/exploration_msgs/msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/jade/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::exploration_msgs::SetPolygonResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "exploration_msgs/SetPolygonResponse";
  }

  static const char* value(const ::exploration_msgs::SetPolygonResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::exploration_msgs::SetPolygonResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetPolygonResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::exploration_msgs::SetPolygonResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::exploration_msgs::SetPolygonResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // EXPLORATION_MSGS_MESSAGE_SETPOLYGONRESPONSE_H
