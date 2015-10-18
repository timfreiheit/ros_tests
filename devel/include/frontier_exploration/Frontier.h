// Generated by gencpp from file frontier_exploration/Frontier.msg
// DO NOT EDIT!


#ifndef FRONTIER_EXPLORATION_MESSAGE_FRONTIER_H
#define FRONTIER_EXPLORATION_MESSAGE_FRONTIER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace frontier_exploration
{
template <class ContainerAllocator>
struct Frontier_
{
  typedef Frontier_<ContainerAllocator> Type;

  Frontier_()
    : size(0)
    , min_distance(0.0)
    , initial()
    , centroid()
    , middle()  {
    }
  Frontier_(const ContainerAllocator& _alloc)
    : size(0)
    , min_distance(0.0)
    , initial(_alloc)
    , centroid(_alloc)
    , middle(_alloc)  {
    }



   typedef uint32_t _size_type;
  _size_type size;

   typedef double _min_distance_type;
  _min_distance_type min_distance;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _initial_type;
  _initial_type initial;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _centroid_type;
  _centroid_type centroid;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _middle_type;
  _middle_type middle;




  typedef boost::shared_ptr< ::frontier_exploration::Frontier_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::frontier_exploration::Frontier_<ContainerAllocator> const> ConstPtr;

}; // struct Frontier_

typedef ::frontier_exploration::Frontier_<std::allocator<void> > Frontier;

typedef boost::shared_ptr< ::frontier_exploration::Frontier > FrontierPtr;
typedef boost::shared_ptr< ::frontier_exploration::Frontier const> FrontierConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::frontier_exploration::Frontier_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::frontier_exploration::Frontier_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace frontier_exploration

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'frontier_exploration': ['/home/tim/Dokumente/Git/ros_tests/src/frontier_exploration/frontier_exploration/msg', '/home/tim/Dokumente/Git/ros_tests/devel/share/frontier_exploration/msg'], 'actionlib_msgs': ['/opt/ros/jade/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/jade/share/visualization_msgs/cmake/../msg'], 'move_base_msgs': ['/opt/ros/jade/share/move_base_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::frontier_exploration::Frontier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::frontier_exploration::Frontier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frontier_exploration::Frontier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frontier_exploration::Frontier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frontier_exploration::Frontier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frontier_exploration::Frontier_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::frontier_exploration::Frontier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1325c0e43f607455fdee9e36462f6ba0";
  }

  static const char* value(const ::frontier_exploration::Frontier_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1325c0e43f607455ULL;
  static const uint64_t static_value2 = 0xfdee9e36462f6ba0ULL;
};

template<class ContainerAllocator>
struct DataType< ::frontier_exploration::Frontier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "frontier_exploration/Frontier";
  }

  static const char* value(const ::frontier_exploration::Frontier_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::frontier_exploration::Frontier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 size\n\
float64 min_distance\n\
geometry_msgs/Point initial\n\
geometry_msgs/Point centroid\n\
geometry_msgs/Point middle\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::frontier_exploration::Frontier_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::frontier_exploration::Frontier_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.size);
      stream.next(m.min_distance);
      stream.next(m.initial);
      stream.next(m.centroid);
      stream.next(m.middle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Frontier_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::frontier_exploration::Frontier_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::frontier_exploration::Frontier_<ContainerAllocator>& v)
  {
    s << indent << "size: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.size);
    s << indent << "min_distance: ";
    Printer<double>::stream(s, indent + "  ", v.min_distance);
    s << indent << "initial: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.initial);
    s << indent << "centroid: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.centroid);
    s << indent << "middle: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.middle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRONTIER_EXPLORATION_MESSAGE_FRONTIER_H
