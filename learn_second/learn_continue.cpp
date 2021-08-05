#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    int sum = 0;
    for (int  i = 1; i <= 5; i++)
    {
        if (i%2==1)
        {
          continue;   //continue 结束循环的当前轮回（跳过）
        }
        
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
