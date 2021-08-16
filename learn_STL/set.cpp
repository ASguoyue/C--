//set��STL��һ�ֱ�׼�������������ײ�ʹ��ƽ������������������ʵ�֣�����ɾ������ʱ������Ҫָ������ڵ㼴����ɣ����漰���ڴ��ƶ��Ϳ���������Ч�ʱȽϸߡ�
// ʹ��ʱע�����ͷ�ļ�<set>    std::set and std::multiset associative containers
// s.begin()     ������set�����ĵ�һ��Ԫ��
// s.end() �������� ����set���������һ��Ԫ��
// s.clear()       ɾ��set�����е����е�Ԫ��
// s.empty() ������ �ж�set�����Ƿ�Ϊ��
// s.insert()      ����һ��Ԫ��
// s.erase()       ɾ��һ��Ԫ��
// s.size() �����������ص�ǰset�����е�Ԫ�ظ���
#include<stdio.h>
#include<set>
using namespace std;
//����vector��string ����֧��*(it+1)�ķ��ʷ�ʽ
int main(int argc, char const *argv[])
{
    set<int> st;    //����һ��set����
    st.insert(3);
    st.insert(5);
    st.insert(7);
    st.insert(3);
    for (set<int>::iterator it = st.begin(); it!=st.end(); it++)  //set�ĵ��������
    {
       printf("%d ",*it);  //������Ľ�����������򣬲��޳����ظ���Ԫ��
    }
    
    return 0;
}

