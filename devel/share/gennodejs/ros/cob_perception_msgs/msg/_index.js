
"use strict";

let PositionMeasurementArray = require('./PositionMeasurementArray.js');
let PositionMeasurement = require('./PositionMeasurement.js');
let Person = require('./Person.js');
let DetectionArray = require('./DetectionArray.js');
let Detection = require('./Detection.js');
let Skeleton = require('./Skeleton.js');
let Mask = require('./Mask.js');
let Rect = require('./Rect.js');
let ColorDepthImageArray = require('./ColorDepthImageArray.js');
let PersonStamped = require('./PersonStamped.js');
let People = require('./People.js');
let PointCloud2Array = require('./PointCloud2Array.js');
let ColorDepthImage = require('./ColorDepthImage.js');
let Float64ArrayStamped = require('./Float64ArrayStamped.js');

module.exports = {
  PositionMeasurementArray: PositionMeasurementArray,
  PositionMeasurement: PositionMeasurement,
  Person: Person,
  DetectionArray: DetectionArray,
  Detection: Detection,
  Skeleton: Skeleton,
  Mask: Mask,
  Rect: Rect,
  ColorDepthImageArray: ColorDepthImageArray,
  PersonStamped: PersonStamped,
  People: People,
  PointCloud2Array: PointCloud2Array,
  ColorDepthImage: ColorDepthImage,
  Float64ArrayStamped: Float64ArrayStamped,
};
