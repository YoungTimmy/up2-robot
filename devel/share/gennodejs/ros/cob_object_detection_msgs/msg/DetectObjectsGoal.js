// Auto-generated. Do not edit!

// (in-package cob_object_detection_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class DetectObjectsGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.object_name = null;
    }
    else {
      if (initObj.hasOwnProperty('object_name')) {
        this.object_name = initObj.object_name
      }
      else {
        this.object_name = new std_msgs.msg.String();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DetectObjectsGoal
    // Serialize message field [object_name]
    bufferOffset = std_msgs.msg.String.serialize(obj.object_name, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DetectObjectsGoal
    let len;
    let data = new DetectObjectsGoal(null);
    // Deserialize message field [object_name]
    data.object_name = std_msgs.msg.String.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.String.getMessageSize(object.object_name);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'cob_object_detection_msgs/DetectObjectsGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'adb33ef101026c3e15d799e3decf403f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # The goal
    std_msgs/String object_name
    
    ================================================================================
    MSG: std_msgs/String
    string data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DetectObjectsGoal(null);
    if (msg.object_name !== undefined) {
      resolved.object_name = std_msgs.msg.String.Resolve(msg.object_name)
    }
    else {
      resolved.object_name = new std_msgs.msg.String()
    }

    return resolved;
    }
};

module.exports = DetectObjectsGoal;
