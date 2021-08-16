//set的insert操作
#include<iostream>
#include<set>
using namespace std;
set<int> s;
void setprint(int cnt){
    cout<<"test output:"<<cnt<<endl;
    for (set<int>::iterator it = s.begin();it!=s.end(); it++)  //使用迭代器输出
    {
        printf("%d ",*it);
    }
    printf("\n");
    return;
}

int main(int argc, char const *argv[])
{
    int cnt=1;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    setprint(cnt++);
    
    s.insert(4);
    setprint(cnt++);

    int a[4]={11,12,13,14};
    s.insert(a,a+4);
    setprint(cnt++);
    return 0;
}
