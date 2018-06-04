# Install script for directory: /home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/up2/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/action" TYPE FILE FILES
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/action/AcquireObjectImage.action"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/action/DetectObjects.action"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/action/TrainObject.action"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/msg" TYPE FILE FILES
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageAction.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageActionGoal.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageActionResult.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageActionFeedback.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageGoal.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageResult.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/AcquireObjectImageFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/msg" TYPE FILE FILES
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsAction.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsActionGoal.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsActionResult.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsActionFeedback.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsGoal.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsResult.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/DetectObjectsFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/msg" TYPE FILE FILES
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectAction.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectActionGoal.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectActionResult.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectActionFeedback.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectGoal.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectResult.msg"
    "/home/up2/catkin_ws/devel/share/cob_object_detection_msgs/msg/TrainObjectFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/msg" TYPE FILE FILES
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/DetectionArray.msg"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/Detection.msg"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/MaskArray.msg"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/Mask.msg"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/PoseRT.msg"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/RectArray.msg"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg/Rect.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/srv" TYPE FILE FILES
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/AcquireObjectImage.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/BagTrainObject.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/BaTestEnvironment.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/DetectObjects.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/SaveRecordedObject.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/StartObjectRecording.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/StopObjectRecording.srv"
    "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/srv/TrainObject.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/cmake" TYPE FILE FILES "/home/up2/catkin_ws/build/cob_perception_common/cob_object_detection_msgs/catkin_generated/installspace/cob_object_detection_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/up2/catkin_ws/devel/include/cob_object_detection_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/up2/catkin_ws/devel/share/roseus/ros/cob_object_detection_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/up2/catkin_ws/devel/share/common-lisp/ros/cob_object_detection_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/up2/catkin_ws/devel/share/gennodejs/ros/cob_object_detection_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/up2/catkin_ws/devel/lib/python2.7/dist-packages/cob_object_detection_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/up2/catkin_ws/devel/lib/python2.7/dist-packages/cob_object_detection_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/up2/catkin_ws/build/cob_perception_common/cob_object_detection_msgs/catkin_generated/installspace/cob_object_detection_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/cmake" TYPE FILE FILES "/home/up2/catkin_ws/build/cob_perception_common/cob_object_detection_msgs/catkin_generated/installspace/cob_object_detection_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs/cmake" TYPE FILE FILES
    "/home/up2/catkin_ws/build/cob_perception_common/cob_object_detection_msgs/catkin_generated/installspace/cob_object_detection_msgsConfig.cmake"
    "/home/up2/catkin_ws/build/cob_perception_common/cob_object_detection_msgs/catkin_generated/installspace/cob_object_detection_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cob_object_detection_msgs" TYPE FILE FILES "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cob_object_detection_msgs" TYPE PROGRAM FILES "/home/up2/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/test/detection_component_testing.py")
endif()

