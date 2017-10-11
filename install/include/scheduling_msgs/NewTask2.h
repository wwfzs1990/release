// Generated by gencpp from file scheduling_msgs/NewTask2.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_NEWTASK2_H
#define SCHEDULING_MSGS_MESSAGE_NEWTASK2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace scheduling_msgs
{
template <class ContainerAllocator>
struct NewTask2_
{
  typedef NewTask2_<ContainerAllocator> Type;

  NewTask2_()
    : taskID(0)
    , source_station()
    , source_action(0)
    , destination_station()
    , destination_action(0)  {
    }
  NewTask2_(const ContainerAllocator& _alloc)
    : taskID(0)
    , source_station(_alloc)
    , source_action(0)
    , destination_station(_alloc)
    , destination_action(0)  {
  (void)_alloc;
    }



   typedef int32_t _taskID_type;
  _taskID_type taskID;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _source_station_type;
  _source_station_type source_station;

   typedef int32_t _source_action_type;
  _source_action_type source_action;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _destination_station_type;
  _destination_station_type destination_station;

   typedef int32_t _destination_action_type;
  _destination_action_type destination_action;




  typedef boost::shared_ptr< ::scheduling_msgs::NewTask2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::NewTask2_<ContainerAllocator> const> ConstPtr;

}; // struct NewTask2_

typedef ::scheduling_msgs::NewTask2_<std::allocator<void> > NewTask2;

typedef boost::shared_ptr< ::scheduling_msgs::NewTask2 > NewTask2Ptr;
typedef boost::shared_ptr< ::scheduling_msgs::NewTask2 const> NewTask2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::NewTask2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::NewTask2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::NewTask2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::NewTask2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::NewTask2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6227bbc971ea152cf51a61b9dec59db0";
  }

  static const char* value(const ::scheduling_msgs::NewTask2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6227bbc971ea152cULL;
  static const uint64_t static_value2 = 0xf51a61b9dec59db0ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/NewTask2";
  }

  static const char* value(const ::scheduling_msgs::NewTask2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 taskID\n\
string source_station\n\
int32 source_action\n\
string destination_station\n\
int32 destination_action\n\
";
  }

  static const char* value(const ::scheduling_msgs::NewTask2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.taskID);
      stream.next(m.source_station);
      stream.next(m.source_action);
      stream.next(m.destination_station);
      stream.next(m.destination_action);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NewTask2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::NewTask2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::NewTask2_<ContainerAllocator>& v)
  {
    s << indent << "taskID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.taskID);
    s << indent << "source_station: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.source_station);
    s << indent << "source_action: ";
    Printer<int32_t>::stream(s, indent + "  ", v.source_action);
    s << indent << "destination_station: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.destination_station);
    s << indent << "destination_action: ";
    Printer<int32_t>::stream(s, indent + "  ", v.destination_action);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_NEWTASK2_H
