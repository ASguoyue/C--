#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
#获取字符串的长度，使用size(),或者length()
int main(int argc, char const *argv[])
{
    /* code */
    string str = "abcd";
    for (int i = 0; i < str.length(); i++)
    {
        printf("%c", str[i]);
    }

    for (string::iterator it = str.begin(); it != str.end(); it++) //string 的迭代器
    {
        printf("%c", *it);
    }

    return 0;
}


#string中的函数的用法
# substr(pos,len) 返回从pos号开始，长度为len的子串
# string::npos 本身值为-1 也可以认为是unsigned int的最大值
# find(str,pos)  找str的子串
