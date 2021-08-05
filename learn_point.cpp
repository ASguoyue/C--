#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int *p = &a;
    a = 233;  //等价语句 *p = 233，a是变量，p是指针，代表地址，*p代表便量
    printf("%d  %d",&a,a);
    return 0;





} 
