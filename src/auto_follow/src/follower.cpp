#include <ros/ros.h> 
#include <serial/serial.h>  //ROS已经内置了的串口包 
#include <std_msgs/String.h> 
#include <std_msgs/Char.h> 
#include <sstream>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

 int d = 0;
 int Distance = 0;
 int Angle = 0;
 int num[10] = {0};
void DW1000_data_CallBack(const std_msgs::Char msg)
{
    ROS_INFO("I heard: [%x] ",msg);

    if (d > 0)
    {
       // printf("d=  :%d\n",d);
        num[d] = msg.data;
        d--;
    }
    //printf("msg:%x\n",msg.data);
    if(msg.data == 0x6d)    //判断是否读到6d，如果读到，则记录接下来的4个数
       {
           printf("true\n");
           d = 5;
       } 

    //else
       // printf("false msg:%x\n ",msg);

    int d5 = num[5];            //很奇怪，用atoi函数会报错，直接输出num[]会报错，只能出此下策
    int d4 = num[4];
    int a3 = num[3];
    int a2 = num[2];

    if (d == 1)  //判断是否读出了接下来的4个数，如果d=1，则读完了
    {
        
        Distance = d4*256 + d5;  //十进制，单位：cm；小端法，并且int已经将d4和d5转为了十进制

        if(a2 == 255) Angle = a3-255; // 如果a2是ff，则要减去ff，否则角度为a3,单位：度
        else Angle = a3;

        printf("Distance & Angle: %d cm     %d degree\n",Distance,Angle);

        d = 0;

    }

}




int main(int argc,char ** argv)
{
    
    ros::init(argc,argv,"follower");

    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("DW1000_data",10000,DW1000_data_CallBack);

    ros::spin();

    return 0;

}