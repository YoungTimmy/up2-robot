#include <ros/ros.h> 
#include <serial/serial.h>  //ROS已经内置了的串口包 
#include <std_msgs/String.h> 
#include <std_msgs/Char.h> 
#include <geometry_msgs/Twist.h>
#include <sstream>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <string>
#define LEN 30
using namespace std;

ros::Publisher  cmdVelPub;

 
int d = 0;
int Distance = 0,Angle = 0;
int ang[LEN],dis[LEN];
int ang_aver=0,dis_aver=0;
bool ang_full=false,dis_full=false;
int ang_cnt=0,dis_cnt=0;
int num[10] = {0};

//固定参数
//角度左右界限 度
int Left_Bound_Angle = 30;
int Right_Bound_Angle = - 30 ;

//安全距离 cm
int Safe_Distance = 40;

//角度PID 参数
double ang_P = 0.3 / 30;
double ang_I = 0;
double ang_D = 0;
//速度PID参数
double dis_P = 0.05 / 40;
double dis_I = 0;
double dis_D = 0;
void DW1000_data_CallBack(const std_msgs::Char msg)
{
    //ROS_INFO("I heard: [%x] ",msg);

    if (d > 0)
    {
       // printf("d=  :%d\n",d);
        num[d] = msg.data;
        d--;
    }
    //printf("msg:%x\n",msg.data);
    if(msg.data == 0x6d)    //判断是否读到6d，如果读到，则记录接下来的4个数
       {
           //printf("true\n");
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

        //角度数据平滑
        if(ang_full)  // 如果ang数组里存满了数据，那么求平均做平滑
            {
                if(ang_cnt==LEN-1)
                    ang_cnt = 0;
                ang[ang_cnt++] = Angle;  //替换掉旧数据ang[ang_cnt]
                int sum = 0;
                for(int i = 0;i<LEN;++i)
                    sum += ang[i];
                ang_aver = sum / LEN;
            }
        else //先填满ang数组
            {
                if(ang_cnt<LEN-1)
                {
                    ang[ang_cnt++] = Angle;
                    ang_aver = Angle;   //此时ang_aver不做平均
                }
                else if(ang_cnt ==LEN-1)
                    {
                        ang[ang_cnt] = Angle; //填入最后一个数据
                        ang_aver = Angle;
                        //flag 修改
                        ang_full = true; 
                    }
                    else //这一段应该不会执行，为了保险起见
                        {
                            ang_cnt = LEN-1;
                        }
            }

        //距离数据平滑
        if(dis_full)  // 如果dis数组里存满了数据，那么求平均做平滑
            {
                if(dis_cnt==LEN-1)
                    dis_cnt = 0;
                dis[dis_cnt++] = Distance;  //替换掉旧数据dis[dis_cnt]
                int sum = 0;
                for(int i = 0;i<LEN;++i)
                    sum += dis[i];
                dis_aver = sum / LEN;
            }
        else //先填满dis数组
            {
                if(dis_cnt<LEN-1)
                {
                    dis[dis_cnt++] = Distance;
                    dis_aver = Distance;   //此时ang_aver不做平均
                }
                else if(dis_cnt ==LEN-1)
                    {
                        dis[dis_cnt] = Distance; //填入最后一个数据
                        dis_aver = Distance;
                        //flag 修改
                        dis_full = true; 
                    }
                    else //这一段应该不会执行，为了保险起见
                        {
                            dis_cnt = LEN-1;
                        }
            }
        
        //printf("Distance & Angle: %d cm     %d degree\n",Distance,Angle);
        printf("Distance & Angle: %d cm     %d degree\n",dis_aver,ang_aver);
        
        d = 0;
        geometry_msgs::Twist speed; // 控制信号载体 Twist message  
        /*
        if (Angle <Left_Bound_Angle && Angle > Right_Bound_Angle)
            speed.angular.z = 0; // 设置角速度为0rad/s，正为左转，负为右转  
        else if(Angle >= Left_Bound_Angle) 
            speed.angular.z = - 0.6;
        else if(Angle <= Right_Bound_Angle)
            speed.angular.z =   0.6;
        
        speed.linear.x = 0; // 设置线速度为0.1m/s，正为前进，负为后退  
        if(Distance <Safe_Distance)
            speed.linear.x = 0;
        else 
            speed.linear.x= 0.05;
        */
        
        //PID调节角速度和线速度
        //角速度
        //目前认为机器人坐标系正方向是传感器坐标系的20度方向
        int ang_error = 40 - ang_aver;

        speed.angular.z =(ang_P * ang_error);
        //最高线速度
        if (speed.angular.z < -0.8 || speed.angular.z > 0.8 )
            speed.angular.z = 0.8;

        //线速度
        int dis_error = Safe_Distance - dis_aver;

        speed.linear.x = -(dis_P * dis_error);
        speed.linear.x = 0;
        printf("linear_speed: %f    rotation_speed: %f\n",speed.linear.x,speed.angular.z);
        cmdVelPub.publish(speed); // 将刚才设置的指令发送给机器人 
   // }
    }
 



}
void shutdown(int sig)  
{  
  cmdVelPub.publish(geometry_msgs::Twist());//使机器人停止运动  
  ROS_INFO("move_turtle_goforward ended!");  
  ros::shutdown();  
}  

int main(int argc,char ** argv)
{
    
    memset(ang,0,sizeof(ang));
    memset(dis,0,sizeof(dis));
    ros::init(argc,argv,"follower");

    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("DW1000_data",10000,DW1000_data_CallBack);

    cmdVelPub  = n.advertise<geometry_msgs::Twist> ("/mobile_base/commands/velocity",1);


    //signal(SIGINT,shutdown);
    //ROS_INFO("move_turtle_goforward cpp start...");  
    
    //while (ros::ok())  
    //{   

        //loopRate.sleep();//休眠直到一个频率周期的时间  
    //}  
    ros::spin();

    return 0;

}