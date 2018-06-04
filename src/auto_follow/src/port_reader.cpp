#include <ros/ros.h> 
#include <serial/serial.h>  //ROS已经内置了的串口包 
#include <std_msgs/String.h> 
#include<std_msgs/Char.h> 
#include <sstream>
#include <unistd.h>

serial::Serial ser("/dev/ttyUSB0",115200,serial::Timeout::simpleTimeout(1000)); //声明串口对象  
  
int main (int argc, char** argv) 
{ 
    //初始化节点 
    ros::init(argc, argv,"port_reader"); 
    //声明节点句柄 
    ros::NodeHandle nh; 

    //发布主题 
    ros::Publisher chatter_pub = nh.advertise<std_msgs::Char>("DW1000_data", 10000); 

    //检测串口是否已经打开，并给出提示信息 
    if(ser.isOpen()) 
    { 
        ROS_INFO_STREAM("Serial Port initialized"); 
    } 
    else 
    { 
        ROS_INFO_STREAM("Serial Port failed to open!!!!!");
        return -1; 
    } 
  
    //指定循环的频率 
    ros::Rate loop_rate(50); 

    while(ros::ok()) 
    { 
        
        if(ser.available()){ 
            //ROS_INFO_STREAM("Reading from serial port\n"); 
            
            unsigned char buffer[10];
            size_t n=ser.read(buffer,10);

            for(int i=0;i<n;++i)
                 printf("%x  ",buffer[i]);
                
            printf("\n");

    
            for(int i=0;i<n;++i)
            { 
                std_msgs::Char x;
                x.data = buffer[i];
                chatter_pub.publish(x); 
            } 
        }

        //处理ROS的信息，比如订阅消息,并调用回调函数 
        ros::spinOnce(); 
        loop_rate.sleep(); 
  
    }
    return 0; 
} 