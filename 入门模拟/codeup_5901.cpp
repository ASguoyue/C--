//���Ĵ�

#include <stdio.h>
#include <string.h>

bool judge(char str[])
{
    int len = strlen(str);
    //����ȡ�Աȣ�ֻ�Ա�ǰһ��ͺ�һ���Ƿ���Ⱦ���
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
    while (gets(str)) //��ȡ�ַ���
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
