#include<stdio.h>

int main()
{
    int a[5] = {1,5,2,8,3};
    int temp;
    for (int i = 1; i <=4; i++)
    {
        //第二个for循环，与后面的5-i个对比
        for (int j = 0; j < 5 - i; j++)
        {
           if (a[j]>=a[j+1])
           {
               /*交换的原理
                * 1、将小值赋给临时变量
                * 2、将大值赋给小值
                * 3、将临时变量赋给大值
                */

              temp =  a[j] ;
              a[j] =a[j+1];
              a[j+1]=temp;
           }
           
        }
        
    }
    //遍历输出
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
