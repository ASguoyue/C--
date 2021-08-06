#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF)  //判断是否读到取结束
    {
        printf("%d \n",a+b);
    }
    return 0;
}
