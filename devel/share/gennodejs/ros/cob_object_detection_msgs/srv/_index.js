
"use strict";

let StartObjectRecording = require('./StartObjectRecording.js')
let BaTestEnvironment = require('./BaTestEnvironment.js')
let StopObjectRecording = require('./StopObjectRecording.js')
let SaveRecordedObject = require('./SaveRecordedObject.js')
let BagTrainObject = require('./BagTrainObject.js')
let AcquireObjectImage = require('./AcquireObjectImage.js')
let DetectObjects = require('./DetectObjects.js')
let TrainObject = require('./TrainObject.js')

module.exports = {
  StartObjectRecording: StartObjectRecording,
  BaTestEnvironment: BaTestEnvironment,
  StopObjectRecording: StopObjectRecording,
  SaveRecordedObject: SaveRecordedObject,
  BagTrainObject: BagTrainObject,
  AcquireObjectImage: AcquireObjectImage,
  DetectObjects: DetectObjects,
  TrainObject: TrainObject,
};
