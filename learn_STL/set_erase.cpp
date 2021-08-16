//s.erase()       删除一个元素
//删除set容器中的所有的元素

#include<iostream>
#include<set>
using namespace std;

set<int> s;

void setprint(int cnt){
    cout<<"test output"<<cnt<<endl;
    for (set<int>::iterator it =s.begin();it!=s.end();it++)
    {
        printf("%d ",*it);
    }
    printf("\n");
    return;
}

int main(int argc, char const *argv[])
{
    int cnt;
    for (int i = 0; i < 11; i++)
    {
        s.insert(i);
    }
    setprint(cnt++);

    for (int i = 5; i < 11; i++)
    {
        s.erase(i);  //根据元素删除
    }
    setprint(cnt++);

    //重新定义两个容器，相当于定义指着，分别指向头和尾
    set<int>::iterator ita = s.begin();
    set<int>::iterator itb = s.end();
    s.erase(ita);
    setprint(cnt++);

    ita = s.begin();
    itb = s.begin();
    itb++;itb++;
    s.erase(ita,itb);  //删除指定区间的元素
    setprint(cnt++);
    return 0;
}
