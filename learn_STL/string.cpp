#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
#��ȡ�ַ����ĳ��ȣ�ʹ��size(),����length()
int main(int argc, char const *argv[])
{
    /* code */
    string str = "abcd";
    for (int i = 0; i < str.length(); i++)
    {
        printf("%c", str[i]);
    }

    for (string::iterator it = str.begin(); it != str.end(); it++) //string �ĵ�����
    {
        printf("%c", *it);
    }

    return 0;
}


#string�еĺ������÷�
# substr(pos,len) ���ش�pos�ſ�ʼ������Ϊlen���Ӵ�
# string::npos ����ֵΪ-1 Ҳ������Ϊ��unsigned int�����ֵ
# find(str,pos)  ��str���Ӵ�
