//vector �ɱ䳤������  vector<int> name;
//���ʷ�ʽ��1��ͨ���±���ʣ�2��ͨ�����������з��ʣ����������ָ�룩

#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> vi;
    for (int i = 1; i <= 5; i++)
    {
        vi.push_back(i);   //��ĩβ���Ԫ��i
    }
    vector<int>::iterator it = vi.begin();  //begin��ȡvi���׵�ַ��itָ�������ַ��it�Ǹ�ָ������
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*(it+i));   //ָ�����ʽ��ȡ���
    }
    //vector�ĵ�������֧��it<vi.end()��д������ֹ�����ã�=vi.end()
    for (vector<int>::iterator it = vi.begin(); it!=vi.end(); it++)
    {
        printf("%d ",*it);
    }
    
    //vector�еĳ��ú���
    //vi.push_back()  ����β��
    // vi.pop_back()  ɾ��βԪ��
    // vi.size() ��ȡvi�е�Ԫ�ظ���
    // vi.clear() ���vi
    // vi.insert(i,x) ��iλ�ò���x
    // vi.erase(i) ɾ��i����Ԫ�� erase�ķ���ֵ��һ����������ָ��ɾ��Ԫ����һ��Ԫ�ء�
    //vi.erase(i,j) ɾ��i��j�е�Ԫ�� ������һ��ָ��
    return 0;
}

