#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    int sum = 0;
    for (int  i = 1; i <= 5; i++)
    {
        if (i%2==1)
        {
          continue;   //continue ����ѭ���ĵ�ǰ�ֻأ�������
        }
        
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
