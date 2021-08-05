#include<stdio.h>
//字符数组 定义方式不同，使用是一样的
int main(int argc, char const *argv[])
{
    char str[15] = {'G','u','e','Y','u','e'};
    //char str[15] = "good luck";
    for (int i = 0; i < 15; i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}
