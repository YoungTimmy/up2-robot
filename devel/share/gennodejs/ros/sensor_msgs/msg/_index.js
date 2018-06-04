
"use strict";

let ChannelFloat32 = require('./ChannelFloat32.js');
let MultiDOFJointState = require('./MultiDOFJointState.js');
let RegionOfInterest = require('./RegionOfInterest.js');
let CompressedImage = require('./CompressedImage.js');
let TimeReference = require('./TimeReference.js');
let FluidPressure = require('./FluidPressure.js');
let BatteryState = require('./BatteryState.js');
let JoyFeedback = require('./JoyFeedback.js');
let Image = require('./Image.js');
let LaserScan = require('./LaserScan.js');
let PointCloud2 = require('./PointCloud2.js');
let Range = require('./Range.js');
let LaserEcho = require('./LaserEcho.js');
let JoyFeedbackArray = require('./JoyFeedbackArray.js');
let RelativeHumidity = require('./RelativeHumidity.js');
let Joy = require('./Joy.js');
let Illuminance = require('./Illuminance.js');
let NavSatStatus = require('./NavSatStatus.js');
let Imu = require('./Imu.js');
let PointCloud = require('./PointCloud.js');
let MultiEchoLaserScan = require('./MultiEchoLaserScan.js');
let Temperature = require('./Temperature.js');
let JointState = require('./JointState.js');
let CameraInfo = require('./CameraInfo.js');
let NavSatFix = require('./NavSatFix.js');
let MagneticField = require('./MagneticField.js');
let PointField = require('./PointField.js');

module.exports = {
  ChannelFloat32: ChannelFloat32,
  MultiDOFJointState: MultiDOFJointState,
  RegionOfInterest: RegionOfInterest,
  CompressedImage: CompressedImage,
  TimeReference: TimeReference,
  FluidPressure: FluidPressure,
  BatteryState: BatteryState,
  JoyFeedback: JoyFeedback,
  Image: Image,
  LaserScan: LaserScan,
  PointCloud2: PointCloud2,
  Range: Range,
  LaserEcho: LaserEcho,
  JoyFeedbackArray: JoyFeedbackArray,
  RelativeHumidity: RelativeHumidity,
  Joy: Joy,
  Illuminance: Illuminance,
  NavSatStatus: NavSatStatus,
  Imu: Imu,
  PointCloud: PointCloud,
  MultiEchoLaserScan: MultiEchoLaserScan,
  Temperature: Temperature,
  JointState: JointState,
  CameraInfo: CameraInfo,
  NavSatFix: NavSatFix,
  MagneticField: MagneticField,
  PointField: PointField,
};
