#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF)  //?ж??Ƿ?????ȡ????
    {
        printf("%d \n",a+b);
    }
    return 0;
}
