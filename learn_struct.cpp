#include<stdio.h>

struct Point
{
    int x,y;
    Point(){}  // 不经初始化的定义
    Point(int _x,int _y):x(_x),y(_y){}  //提供x y 的初始化
}pt[15];


int main(int argc, char const *argv[])
{
    int num =0;  //用来计数
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j<=3; j++)
        {
            pt[num++]=Point(i,j);  
        }  
    }
    for (int i = 0; i < num; i++)  //此处的num累加的为4*4=16个
    {
       printf("%d,%d \n",pt[i].x,pt[i].y);  //获取结构体中的元素 使用.
    }
    
    return 0;
}
