//s.find() 查找一个元素 找不到返回s.end()

#include<iostream>
#include<set>
using namespace std;

set<int> s;

void setprint(int cnt){
    cout<<"test output"<<cnt<<endl;
    for (set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        printf("%d ",*it);
    }
    printf("\n");
    return;
}
int main(int argc, char const *argv[])
{
    int cnt=0;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    setprint(cnt++);

    if(s.find(2)!=s.end())
        printf(" 2 existent \n");
    else
        printf("2 no existent \n");
    if(s.find(19)!=s.end())
        printf("19 exitent \n");
    else
        printf("19 no existent \n");

    return 0;
}
