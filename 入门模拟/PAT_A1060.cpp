#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int n; //有效位数
string deal(string s, int &e)  //e为指数
{
    int k = 0;  //有效位数
    while (s.length() > 0 && s[0] == '0')  //判断是否为0
    {
        s.erase(s.begin());  //去掉s的前导零
    }
    if (s[0] == '.')   //去掉零以后的的第一个字符是小数点，说明s是小于1的小数
    {
        s.erase(s.begin());  //去掉小数点
        while (s.length() > 0 && s[0] == '0')  
        {
            s.erase(s.begin());   //去掉小数点后非零位的所有零
            e--;    //每次去掉一个零，指数减一 相当于小数点向后移动一个位，指数减一
        }
    }
    else
    {
        while (k < s.length() && s[k] != '.')
        {
            k++;
            e++;
        }
        if (k < s.length())
        {
            s.erase(s.begin() + k);   //s.begin()的值为1，字符串的首个字符的下标 k+1所在的位置是小数点
        }
        if (s.length() == 0)
        {
            e = 0;  //已经没有别的数了，指数为为0
        }
        int num = 0;
        k=0;
        string res;
        while (num < n)
        {
            if (k < s.length())
                res += s[k++];   //逐步读取保留的位数
            else
                res += '0';
            num++;
        }
        return res;
    }
}

int main(int argc, char const *argv[])
{
    string s1, s2, s3, s4;
    cin >> n >> s1 >> s2;   //键盘输入数据
    int e1 = 0, e2 = 0;
    s3 = deal(s1, e1);//字符进行比较
    s4 = deal(s2, e2);
    if (s3 == s4 && e1 == e2)   //主体相同和指数相同
    {
        cout << "yes 0." << s3 << "*10^" << e1 << endl;
    }
    else
    {
        cout << "no 0." << s3 << "*10^" << e1 << " 0." << s4  <<"*10^"<< e2 << endl;
    }

    return 0;
}
    