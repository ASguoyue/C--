#include<stdio.h>

struct Point
{
    int x,y;
    Point(){}  // ������ʼ���Ķ���
    Point(int _x,int _y):x(_x),y(_y){}  //�ṩx y �ĳ�ʼ��
}pt[15];


int main(int argc, char const *argv[])
{
    int num =0;  //��������
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j<=3; j++)
        {
            pt[num++]=Point(i,j);  
        }  
    }
    for (int i = 0; i < num; i++)  //�˴���num�ۼӵ�Ϊ4*4=16��
    {
       printf("%d,%d \n",pt[i].x,pt[i].y);  //��ȡ�ṹ���е�Ԫ�� ʹ��.
    }
    
    return 0;
}
