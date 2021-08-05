#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n =0;
    int sum=0;

    for (int i = 0; i < 100; i++)
    {
        sum = sum+n;
        n++;
    }
    printf("%d",sum);

    return 0;
}
