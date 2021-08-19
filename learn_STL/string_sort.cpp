#include<algorithm>
#include<string>
#include<iostream>
using namespace std;


bool cmp(string str1,string str2){
    return str1.length()>str2.length();   //长度从长到短
}
int main(int argc, char const *argv[])
{
    string str[3] = {"bbbb","cc","aaa"};
    sort(str,str+3);  //默认从小到大
    for (int i = 0; i < 3; i++)
    {
        cout<<str[i]<<endl;
    }
    
    string s[3] = {"bbb","eeee","iiiiii"};
    sort(s,s+3,cmp);
    for (int i = 0; i < 3; i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}
