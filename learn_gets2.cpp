#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[50];
    for (int i = 0; i < 5; i++)
    {
        str[i]=getchar();  //һ��Ҫ�������ÿ���ַ�������롰\0" ���������
    }
    puts(str);
    return 0;
}
