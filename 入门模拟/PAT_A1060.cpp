#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int n; //��Чλ��
string deal(string s, int &e)  //eΪָ��
{
    int k = 0;  //��Чλ��
    while (s.length() > 0 && s[0] == '0')  //�ж��Ƿ�Ϊ0
    {
        s.erase(s.begin());  //ȥ��s��ǰ����
    }
    if (s[0] == '.')   //ȥ�����Ժ�ĵĵ�һ���ַ���С���㣬˵��s��С��1��С��
    {
        s.erase(s.begin());  //ȥ��С����
        while (s.length() > 0 && s[0] == '0')  
        {
            s.erase(s.begin());   //ȥ��С��������λ��������
            e--;    //ÿ��ȥ��һ���㣬ָ����һ �൱��С��������ƶ�һ��λ��ָ����һ
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
            s.erase(s.begin() + k);   //s.begin()��ֵΪ1���ַ������׸��ַ����±� k+1���ڵ�λ����С����
        }
        if (s.length() == 0)
        {
            e = 0;  //�Ѿ�û�б�����ˣ�ָ��ΪΪ0
        }
        int num = 0;
        k=0;
        string res;
        while (num < n)
        {
            if (k < s.length())
                res += s[k++];   //�𲽶�ȡ������λ��
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
    cin >> n >> s1 >> s2;   //������������
    int e1 = 0, e2 = 0;
    s3 = deal(s1, e1);//�ַ����бȽ�
    s4 = deal(s2, e2);
    if (s3 == s4 && e1 == e2)
    {
        cout << "yes 0." << s3 << "*10^" << e1 << endl;
    }
    else
    {
        cout << "no 0." << s3 << "*10^" << e1 << " 0." << s4  <<"*10^"<< e2 << endl;
    }

    return 0;
}
    