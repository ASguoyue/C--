#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[50];
    for (int i = 0; i < 5; i++)
    {
        str[i]=getchar();  //一定要在输入的每个字符串后加入“\0" 否则会乱码
    }
    puts(str);
    return 0;
}
