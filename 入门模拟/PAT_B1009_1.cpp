//说反话
#include <string.h>
#include <stdio.h>
//编程的思路
//先用一位的数组存储字符串信息
//按照空格的划分，将每个单词存放到二维数组中
//按照行反向输出每行的单词

int main()
{
    char str[90][90];
    int num = 0;
    char s[100];
    gets(s);
    int r = 0, l = 0;
    int len = strlen(s);

    //将单词放入到二维数组中
    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
        {
            str[r][l++] = s[i];
        }
        else
        {
            str[r][l] = '\0'; //每个字符串后面有个空格
            r++;
            l = 0;
        }
    }
    for (int j = r; j >= 0; j--)
    {
        printf("%s", str[j]);
        if (j > 0)
        {
            printf(" ");
        }
    }

    return 0;
}
