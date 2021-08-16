//s.erase()       ɾ��һ��Ԫ��
//ɾ��set�����е����е�Ԫ��

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
        s.erase(i);  //����Ԫ��ɾ��
    }
    setprint(cnt++);

    //���¶��������������൱�ڶ���ָ�ţ��ֱ�ָ��ͷ��β
    set<int>::iterator ita = s.begin();
    set<int>::iterator itb = s.end();
    s.erase(ita);
    setprint(cnt++);

    ita = s.begin();
    itb = s.begin();
    itb++;itb++;
    s.erase(ita,itb);  //ɾ��ָ�������Ԫ��
    setprint(cnt++);
    return 0;
}
