#include<stdio.h>

int main(int argc, char const *argv[])
{
    int  n = 0;
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum = sum+i;
        if(sum > 2000)
            break;  //break ֱ������ѭ��
            //continue; //continue ����ѭ���ĵ�ǰ�ֻ�

    }
    printf("%d",sum);
    
    return 0;
}
