#include<stdio.h>

int main()
{
    int sum = 0;
    int n = 1;
    while (n<=100)
    {
       sum = sum+n;
       n ++;
    }
    printf("num = %d",sum);
    return 0;
}
