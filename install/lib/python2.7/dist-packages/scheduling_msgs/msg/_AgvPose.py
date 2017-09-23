# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from scheduling_msgs/AgvPose.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class AgvPose(genpy.Message):
  _md5sum = "18320775d72245e409c5b54ce16206d9"
  _type = "scheduling_msgs/AgvPose"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 agvID
string agvName
geometry_msgs/PoseStamped agvPose

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['agvID','agvName','agvPose']
  _slot_types = ['int32','string','geometry_msgs/PoseStamped']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       agvID,agvName,agvPose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AgvPose, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.agvID is None:
        self.agvID = 0
      if self.agvName is None:
        self.agvName = ''
      if self.agvPose is None:
        self.agvPose = geometry_msgs.msg.PoseStamped()
    else:
      self.agvID = 0
      self.agvName = ''
      self.agvPose = geometry_msgs.msg.PoseStamped()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_i.pack(self.agvID))
      _x = self.agvName
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3I.pack(_x.agvPose.header.seq, _x.agvPose.header.stamp.secs, _x.agvPose.header.stamp.nsecs))
      _x = self.agvPose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.agvPose.pose.position.x, _x.agvPose.pose.position.y, _x.agvPose.pose.position.z, _x.agvPose.pose.orientation.x, _x.agvPose.pose.orientation.y, _x.agvPose.pose.orientation.z, _x.agvPose.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.agvPose is None:
        self.agvPose = geometry_msgs.msg.PoseStamped()
      end = 0
      start = end
      end += 4
      (self.agvID,) = _struct_i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.agvName = str[start:end].decode('utf-8')
      else:
        self.agvName = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.agvPose.header.seq, _x.agvPose.header.stamp.secs, _x.agvPose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.agvPose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.agvPose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.agvPose.pose.position.x, _x.agvPose.pose.position.y, _x.agvPose.pose.position.z, _x.agvPose.pose.orientation.x, _x.agvPose.pose.orientation.y, _x.agvPose.pose.orientation.z, _x.agvPose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_i.pack(self.agvID))
      _x = self.agvName
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3I.pack(_x.agvPose.header.seq, _x.agvPose.header.stamp.secs, _x.agvPose.header.stamp.nsecs))
      _x = self.agvPose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.agvPose.pose.position.x, _x.agvPose.pose.position.y, _x.agvPose.pose.position.z, _x.agvPose.pose.orientation.x, _x.agvPose.pose.orientation.y, _x.agvPose.pose.orientation.z, _x.agvPose.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.agvPose is None:
        self.agvPose = geometry_msgs.msg.PoseStamped()
      end = 0
      start = end
      end += 4
      (self.agvID,) = _struct_i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.agvName = str[start:end].decode('utf-8')
      else:
        self.agvName = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.agvPose.header.seq, _x.agvPose.header.stamp.secs, _x.agvPose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.agvPose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.agvPose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.agvPose.pose.position.x, _x.agvPose.pose.position.y, _x.agvPose.pose.position.z, _x.agvPose.pose.orientation.x, _x.agvPose.pose.orientation.y, _x.agvPose.pose.orientation.z, _x.agvPose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i = struct.Struct("<i")
_struct_3I = struct.Struct("<3I")
_struct_7d = struct.Struct("<7d")
