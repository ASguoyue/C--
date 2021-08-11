#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str1[20];
    char str2[5][10];
    gets(str1);
    for (int i = 0; i < 3; i++)
    {
        gets(str2[i]);
    }
    puts(str1);
    for (int i = 0; i < 3; i++)
    {
        puts(str2[i]); //puts 输出多维数组的一维数组
    }
    
    
    return 0;
}
