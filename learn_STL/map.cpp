//map ��Ϊӳ�䣬��������s[3]=20 int->int ��ӳ��  db[0]=3.14 int->double
//����á��ַ���->ҳ��ġ�ӳ�䣬����ʹ��map
// map���Խ��κεĻ������ͣ�����stl������ӳ�䵽����Ļ������ͣ�����stl������
//ʹ�� #include<map> using name std;
//����ͨ���±�͵���������  map�еļ���Ψһ�� ֵ���Ըı�
#include<iostream>
#include<map>
using namespace std;

int main(int argc, char const *argv[])
{
    //����map
    map<char,int> mp;
    mp['c']=20;
    mp['c']=30;
    printf("%d \n",mp['c']); //���¸�ֵ

    return 0;
}
