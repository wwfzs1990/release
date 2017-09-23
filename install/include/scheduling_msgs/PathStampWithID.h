// Generated by gencpp from file scheduling_msgs/PathStampWithID.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_PATHSTAMPWITHID_H
#define SCHEDULING_MSGS_MESSAGE_PATHSTAMPWITHID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseStamped.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct PathStampWithID_
{
  typedef PathStampWithID_<ContainerAllocator> Type;

  PathStampWithID_()
    : header()
    , priority(0)
    , pathID(0)
    , flags(0)
    , poses()  {
    }
  PathStampWithID_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , priority(0)
    , pathID(0)
    , flags(0)
    , poses(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _priority_type;
  _priority_type priority;

   typedef int32_t _pathID_type;
  _pathID_type pathID;

   typedef int32_t _flags_type;
  _flags_type flags;

   typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;




  typedef boost::shared_ptr< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> const> ConstPtr;

}; // struct PathStampWithID_

typedef ::scheduling_msgs::PathStampWithID_<std::allocator<void> > PathStampWithID;

typedef boost::shared_ptr< ::scheduling_msgs::PathStampWithID > PathStampWithIDPtr;
typedef boost::shared_ptr< ::scheduling_msgs::PathStampWithID const> PathStampWithIDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::PathStampWithID_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cdd7203384a2fc9ee858c81f1710e608";
  }

  static const char* value(const ::scheduling_msgs::PathStampWithID_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcdd7203384a2fc9eULL;
  static const uint64_t static_value2 = 0xe858c81f1710e608ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/PathStampWithID";
  }

  static const char* value(const ::scheduling_msgs::PathStampWithID_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
int32 priority\n\
int32 pathID\n\
int32 flags\n\
geometry_msgs/PoseStamped[] poses\n\
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
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
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
";
  }

  static const char* value(const ::scheduling_msgs::PathStampWithID_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.priority);
      stream.next(m.pathID);
      stream.next(m.flags);
      stream.next(m.poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathStampWithID_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::PathStampWithID_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::PathStampWithID_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "priority: ";
    Printer<int32_t>::stream(s, indent + "  ", v.priority);
    s << indent << "pathID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pathID);
    s << indent << "flags: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flags);
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_PATHSTAMPWITHID_H
