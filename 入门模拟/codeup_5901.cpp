//回文串

#include <stdio.h>
#include <string.h>

bool judge(char str[])
{
    int len = strlen(str);
    //遍历取对比，只对比前一半和后一半是否相等就行
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    char str[100];
    while (gets(str)) //获取字符串
    {
        bool flag = judge(str);
        if (flag == true)
        {
            printf("yes \n");
        }
        else
        {
            printf("No \n");
        }
    }

    return 0;
}
