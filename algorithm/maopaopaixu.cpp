#include<stdio.h>

int main()
{
    int a[5] = {1,5,2,8,3};
    int temp;
    for (int i = 1; i <=4; i++)
    {
        //�ڶ���forѭ����������5-i���Ա�
        for (int j = 0; j < 5 - i; j++)
        {
           if (a[j]>=a[j+1])
           {
               /*������ԭ��
                * 1����Сֵ������ʱ����
                * 2������ֵ����Сֵ
                * 3������ʱ����������ֵ
                */

              temp =  a[j] ;
              a[j] =a[j+1];
              a[j+1]=temp;
           }
           
        }
        
    }
    //�������
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
