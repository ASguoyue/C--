#include<stdio.h>
#include<set>
using namespace std;
//����vector��string ����֧��*(it+1)�ķ��ʷ�ʽ
int main(int argc, char const *argv[])
{
    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(7);
    st.insert(3);
    for (set<int>::iterator it = st.begin(); it!=st.end(); it++)
    {
       printf("%d ",*it);  //������Ľ�����������򣬲��޳����ظ���Ԫ��
    }
    
    return 0;
}
