# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cob_3d_mapping_msgs/SetGeometryMapRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg
import geometry_msgs.msg
import cob_3d_mapping_msgs.msg
import std_msgs.msg

class SetGeometryMapRequest(genpy.Message):
  _md5sum = "f00740a6f429ef52cd72626c52eeda1c"
  _type = "cob_3d_mapping_msgs/SetGeometryMapRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """cob_3d_mapping_msgs/ShapeArray map

================================================================================
MSG: cob_3d_mapping_msgs/ShapeArray
# An array of poses with a header for global reference.

Header header

cob_3d_mapping_msgs/Shape[] shapes
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
MSG: cob_3d_mapping_msgs/Shape
Header header

uint8 POLYGON=0
uint8 LINE=1
uint8 CURVED=2
uint8 MESH=3
uint8 OTHER=4
uint8 CYLINDER=5
# potential extensions: SPHERE, CYLINDER, BOX

byte type
int32 id
float32 weight

geometry_msgs/Pose pose

# define shape parameters
# for plane
# normal vector = params[0],params[1],params[2]
#	d = params[3]
# for line
# direction vector = params[0],params[1],params[2]
# for curved
# 3 for plane, 6 for polynom 2nd degree, ...
#
#for cylinder
# symmetry axis = params[0],params[1],params[2]
# radius	= params[3]
# min and max height (rel to origin) = params[4], params[5]
#
float64[] params

sensor_msgs/PointCloud2[] points

#### define mesh ####
# each three entries form a triangle; indices of points are stored
int32[] vertices

#geometry_msgs/Point32 centroid
std_msgs/ColorRGBA color
bool[] holes

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
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

================================================================================
MSG: sensor_msgs/PointCloud2
# This message holds a collection of N-dimensional points, which may
# contain additional information such as normals, intensity, etc. The
# point data is stored as a binary blob, its layout described by the
# contents of the "fields" array.

# The point cloud data may be organized 2d (image-like) or 1d
# (unordered). Point clouds organized as 2d images may be produced by
# camera depth sensors such as stereo or time-of-flight.

# Time of sensor data acquisition, and the coordinate frame ID (for 3d
# points).
Header header

# 2D structure of the point cloud. If the cloud is unordered, height is
# 1 and width is the length of the point cloud.
uint32 height
uint32 width

# Describes the channels and their layout in the binary data blob.
PointField[] fields

bool    is_bigendian # Is this data bigendian?
uint32  point_step   # Length of a point in bytes
uint32  row_step     # Length of a row in bytes
uint8[] data         # Actual point data, size is (row_step*height)

bool is_dense        # True if there are no invalid points

================================================================================
MSG: sensor_msgs/PointField
# This message holds the description of one point entry in the
# PointCloud2 message format.
uint8 INT8    = 1
uint8 UINT8   = 2
uint8 INT16   = 3
uint8 UINT16  = 4
uint8 INT32   = 5
uint8 UINT32  = 6
uint8 FLOAT32 = 7
uint8 FLOAT64 = 8

string name      # Name of field
uint32 offset    # Offset from start of point struct
uint8  datatype  # Datatype enumeration, see above
uint32 count     # How many elements in the field

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a
"""
  __slots__ = ['map']
  _slot_types = ['cob_3d_mapping_msgs/ShapeArray']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       map

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetGeometryMapRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.map is None:
        self.map = cob_3d_mapping_msgs.msg.ShapeArray()
    else:
      self.map = cob_3d_mapping_msgs.msg.ShapeArray()

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
      _x = self
      buff.write(_get_struct_3I().pack(_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs))
      _x = self.map.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.map.shapes)
      buff.write(_struct_I.pack(length))
      for val1 in self.map.shapes:
        _v1 = val1.header
        buff.write(_get_struct_I().pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_bif().pack(_x.type, _x.id, _x.weight))
        _v3 = val1.pose
        _v4 = _v3.position
        _x = _v4
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v5 = _v3.orientation
        _x = _v5
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        length = len(val1.params)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *val1.params))
        length = len(val1.points)
        buff.write(_struct_I.pack(length))
        for val2 in val1.points:
          _v6 = val2.header
          buff.write(_get_struct_I().pack(_v6.seq))
          _v7 = _v6.stamp
          _x = _v7
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v6.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val2
          buff.write(_get_struct_2I().pack(_x.height, _x.width))
          length = len(val2.fields)
          buff.write(_struct_I.pack(length))
          for val3 in val2.fields:
            _x = val3.name
            length = len(_x)
            if python3 or type(_x) == unicode:
              _x = _x.encode('utf-8')
              length = len(_x)
            buff.write(struct.pack('<I%ss'%length, length, _x))
            _x = val3
            buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
          _x = val2
          buff.write(_get_struct_B2I().pack(_x.is_bigendian, _x.point_step, _x.row_step))
          _x = val2.data
          length = len(_x)
          # - if encoded as a list instead, serialize as bytes instead of string
          if type(_x) in [list, tuple]:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
          buff.write(_get_struct_B().pack(val2.is_dense))
        length = len(val1.vertices)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.pack(pattern, *val1.vertices))
        _v8 = val1.color
        _x = _v8
        buff.write(_get_struct_4f().pack(_x.r, _x.g, _x.b, _x.a))
        length = len(val1.holes)
        buff.write(_struct_I.pack(length))
        pattern = '<%sB'%length
        buff.write(struct.pack(pattern, *val1.holes))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.map is None:
        self.map = cob_3d_mapping_msgs.msg.ShapeArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.map.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.map.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.map.shapes = []
      for i in range(0, length):
        val1 = cob_3d_mapping_msgs.msg.Shape()
        _v9 = val1.header
        start = end
        end += 4
        (_v9.seq,) = _get_struct_I().unpack(str[start:end])
        _v10 = _v9.stamp
        _x = _v10
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v9.frame_id = str[start:end].decode('utf-8')
        else:
          _v9.frame_id = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.type, _x.id, _x.weight,) = _get_struct_bif().unpack(str[start:end])
        _v11 = val1.pose
        _v12 = _v11.position
        _x = _v12
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v13 = _v11.orientation
        _x = _v13
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.params = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.points = []
        for i in range(0, length):
          val2 = sensor_msgs.msg.PointCloud2()
          _v14 = val2.header
          start = end
          end += 4
          (_v14.seq,) = _get_struct_I().unpack(str[start:end])
          _v15 = _v14.stamp
          _x = _v15
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v14.frame_id = str[start:end].decode('utf-8')
          else:
            _v14.frame_id = str[start:end]
          _x = val2
          start = end
          end += 8
          (_x.height, _x.width,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.fields = []
          for i in range(0, length):
            val3 = sensor_msgs.msg.PointField()
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3.name = str[start:end].decode('utf-8')
            else:
              val3.name = str[start:end]
            _x = val3
            start = end
            end += 9
            (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
            val2.fields.append(val3)
          _x = val2
          start = end
          end += 9
          (_x.is_bigendian, _x.point_step, _x.row_step,) = _get_struct_B2I().unpack(str[start:end])
          val2.is_bigendian = bool(val2.is_bigendian)
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          val2.data = str[start:end]
          start = end
          end += 1
          (val2.is_dense,) = _get_struct_B().unpack(str[start:end])
          val2.is_dense = bool(val2.is_dense)
          val1.points.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        end += struct.calcsize(pattern)
        val1.vertices = struct.unpack(pattern, str[start:end])
        _v16 = val1.color
        _x = _v16
        start = end
        end += 16
        (_x.r, _x.g, _x.b, _x.a,) = _get_struct_4f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sB'%length
        start = end
        end += struct.calcsize(pattern)
        val1.holes = struct.unpack(pattern, str[start:end])
        val1.holes = map(bool, val1.holes)
        self.map.shapes.append(val1)
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
      _x = self
      buff.write(_get_struct_3I().pack(_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs))
      _x = self.map.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.map.shapes)
      buff.write(_struct_I.pack(length))
      for val1 in self.map.shapes:
        _v17 = val1.header
        buff.write(_get_struct_I().pack(_v17.seq))
        _v18 = _v17.stamp
        _x = _v18
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v17.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_bif().pack(_x.type, _x.id, _x.weight))
        _v19 = val1.pose
        _v20 = _v19.position
        _x = _v20
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v21 = _v19.orientation
        _x = _v21
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        length = len(val1.params)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.params.tostring())
        length = len(val1.points)
        buff.write(_struct_I.pack(length))
        for val2 in val1.points:
          _v22 = val2.header
          buff.write(_get_struct_I().pack(_v22.seq))
          _v23 = _v22.stamp
          _x = _v23
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v22.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val2
          buff.write(_get_struct_2I().pack(_x.height, _x.width))
          length = len(val2.fields)
          buff.write(_struct_I.pack(length))
          for val3 in val2.fields:
            _x = val3.name
            length = len(_x)
            if python3 or type(_x) == unicode:
              _x = _x.encode('utf-8')
              length = len(_x)
            buff.write(struct.pack('<I%ss'%length, length, _x))
            _x = val3
            buff.write(_get_struct_IBI().pack(_x.offset, _x.datatype, _x.count))
          _x = val2
          buff.write(_get_struct_B2I().pack(_x.is_bigendian, _x.point_step, _x.row_step))
          _x = val2.data
          length = len(_x)
          # - if encoded as a list instead, serialize as bytes instead of string
          if type(_x) in [list, tuple]:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
          buff.write(_get_struct_B().pack(val2.is_dense))
        length = len(val1.vertices)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(val1.vertices.tostring())
        _v24 = val1.color
        _x = _v24
        buff.write(_get_struct_4f().pack(_x.r, _x.g, _x.b, _x.a))
        length = len(val1.holes)
        buff.write(_struct_I.pack(length))
        pattern = '<%sB'%length
        buff.write(val1.holes.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.map is None:
        self.map = cob_3d_mapping_msgs.msg.ShapeArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.map.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.map.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.map.shapes = []
      for i in range(0, length):
        val1 = cob_3d_mapping_msgs.msg.Shape()
        _v25 = val1.header
        start = end
        end += 4
        (_v25.seq,) = _get_struct_I().unpack(str[start:end])
        _v26 = _v25.stamp
        _x = _v26
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v25.frame_id = str[start:end].decode('utf-8')
        else:
          _v25.frame_id = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.type, _x.id, _x.weight,) = _get_struct_bif().unpack(str[start:end])
        _v27 = val1.pose
        _v28 = _v27.position
        _x = _v28
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v29 = _v27.orientation
        _x = _v29
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.params = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.points = []
        for i in range(0, length):
          val2 = sensor_msgs.msg.PointCloud2()
          _v30 = val2.header
          start = end
          end += 4
          (_v30.seq,) = _get_struct_I().unpack(str[start:end])
          _v31 = _v30.stamp
          _x = _v31
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v30.frame_id = str[start:end].decode('utf-8')
          else:
            _v30.frame_id = str[start:end]
          _x = val2
          start = end
          end += 8
          (_x.height, _x.width,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.fields = []
          for i in range(0, length):
            val3 = sensor_msgs.msg.PointField()
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3.name = str[start:end].decode('utf-8')
            else:
              val3.name = str[start:end]
            _x = val3
            start = end
            end += 9
            (_x.offset, _x.datatype, _x.count,) = _get_struct_IBI().unpack(str[start:end])
            val2.fields.append(val3)
          _x = val2
          start = end
          end += 9
          (_x.is_bigendian, _x.point_step, _x.row_step,) = _get_struct_B2I().unpack(str[start:end])
          val2.is_bigendian = bool(val2.is_bigendian)
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          val2.data = str[start:end]
          start = end
          end += 1
          (val2.is_dense,) = _get_struct_B().unpack(str[start:end])
          val2.is_dense = bool(val2.is_dense)
          val1.points.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        end += struct.calcsize(pattern)
        val1.vertices = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        _v32 = val1.color
        _x = _v32
        start = end
        end += 16
        (_x.r, _x.g, _x.b, _x.a,) = _get_struct_4f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sB'%length
        start = end
        end += struct.calcsize(pattern)
        val1.holes = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
        val1.holes = map(bool, val1.holes)
        self.map.shapes.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_IBI = None
def _get_struct_IBI():
    global _struct_IBI
    if _struct_IBI is None:
        _struct_IBI = struct.Struct("<IBI")
    return _struct_IBI
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_bif = None
def _get_struct_bif():
    global _struct_bif
    if _struct_bif is None:
        _struct_bif = struct.Struct("<bif")
    return _struct_bif
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_B2I = None
def _get_struct_B2I():
    global _struct_B2I
    if _struct_B2I is None:
        _struct_B2I = struct.Struct("<B2I")
    return _struct_B2I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cob_3d_mapping_msgs/SetGeometryMapResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetGeometryMapResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "cob_3d_mapping_msgs/SetGeometryMapResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetGeometryMapResponse, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class SetGeometryMap(object):
  _type          = 'cob_3d_mapping_msgs/SetGeometryMap'
  _md5sum = 'f00740a6f429ef52cd72626c52eeda1c'
  _request_class  = SetGeometryMapRequest
  _response_class = SetGeometryMapResponse
