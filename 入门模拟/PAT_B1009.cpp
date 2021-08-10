//说反话
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[90][90]; //用于存放单词与单词所在序号
    int num = 0;
    while (scanf("%s", str[num]) != EOF) //ctrl c是结尾
    {
        num++;
    }
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%s", str[i]);
        if (i > 0)
        {
            printf(" ");
        }
    }

    return 0;
}
