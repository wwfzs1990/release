// Generated by gencpp from file scheduling_msgs/QueryPathOnlyRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_QUERYPATHONLYREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_QUERYPATHONLYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct QueryPathOnlyRequest_
{
  typedef QueryPathOnlyRequest_<ContainerAllocator> Type;

  QueryPathOnlyRequest_()
    : agvID(0)
    , agvPos()
    , goalPos()  {
    }
  QueryPathOnlyRequest_(const ContainerAllocator& _alloc)
    : agvID(0)
    , agvPos(_alloc)
    , goalPos(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _agvID_type;
  _agvID_type agvID;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _agvPos_type;
  _agvPos_type agvPos;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _goalPos_type;
  _goalPos_type goalPos;




  typedef boost::shared_ptr< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct QueryPathOnlyRequest_

typedef ::scheduling_msgs::QueryPathOnlyRequest_<std::allocator<void> > QueryPathOnlyRequest;

typedef boost::shared_ptr< ::scheduling_msgs::QueryPathOnlyRequest > QueryPathOnlyRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::QueryPathOnlyRequest const> QueryPathOnlyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "365c5a7041b5f9abb549922ea79ca808";
  }

  static const char* value(const ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x365c5a7041b5f9abULL;
  static const uint64_t static_value2 = 0xb549922ea79ca808ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/QueryPathOnlyRequest";
  }

  static const char* value(const ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 agvID\n\
geometry_msgs/Pose2D agvPos\n\
geometry_msgs/Pose2D goalPos\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.agvID);
      stream.next(m.agvPos);
      stream.next(m.goalPos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QueryPathOnlyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::QueryPathOnlyRequest_<ContainerAllocator>& v)
  {
    s << indent << "agvID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.agvID);
    s << indent << "agvPos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.agvPos);
    s << indent << "goalPos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.goalPos);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_QUERYPATHONLYREQUEST_H
