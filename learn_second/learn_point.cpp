#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int *p = &a;
    a = 233;  //�ȼ���� *p = 233��a�Ǳ�����p��ָ�룬�����ַ��*p�������
    printf("%d  %d",&a,a);
    return 0;





} 
