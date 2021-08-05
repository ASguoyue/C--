#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1,sum = 0;
    do
    {
        sum = sum +n ;
        n++;
    } while (n<=100);
    printf("%d",sum);
    return 0;
}
