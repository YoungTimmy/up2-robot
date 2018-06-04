cmake_minimum_required(VERSION 2.8.3)
project(auto_follow)
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)
catkin_package( 
    LIBRARIES ${PROJECT_NAME} 
    INCLUDE_DIRS include 
    DEPENDS rt pthread 
    ) 
set(serial_SRCS 
    src/serial.cc 
    include/serial/serial.h 
    include/serial/v8stdint.h 
) 
    list(APPEND serial_SRCS src/impl/unix.cc) 
    list(APPEND serial_SRCS src/impl/list_ports/list_ports_linux.cc) 
## Add serial library 
add_library(${PROJECT_NAME} ${serial_SRCS}) 
target_link_libraries(${PROJECT_NAME} rt pthread) 
    
add_executable(port_reader src/port_reader.cpp)
target_link_libraries(port_reader ${catkin_LIBRARIES}) 

##add_dependencies(serial_example package_name_generate_messages_cpp) 
add_dependencies(port_reader ${PROJECT_NAME}) 
target_link_libraries(port_reader ${PROJECT_NAME}) 


add_executable(follower src/follower.cpp)
target_link_libraries(follower ${catkin_LIBRARIES}) 

##add_dependencies(follower package_name_generate_messages_cpp) 
add_dependencies(follower ${PROJECT_NAME}) 
target_link_libraries(follower ${PROJECT_NAME})

## Include headers 
include_directories(include) 
include_directories(${catkin_INCLUDE_DIRS})    
## Install executable 
install(TARGETS ${PROJECT_NAME} 
    ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION} 
    LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION} 
) 
## Install headers 
install(FILES include/serial/serial.h include/serial/v8stdint.h
    DESTINATION ${CATKIN_GLOBAL_INCLUDE_DESTINATION}/serial) 
