#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5]={1,2,3,4,5};
    //����ָ�����������ָ�����֧������������forѭ���е�д��
    //a�������飬���������Ҳ��Ϊ������׵�ַ��ʹ��,&a[0]
    for (int *i = a; i < a+5; i++)
    {
        /* code */
        printf("%d ",*i); //ȡָ���Ԫ��ʹ��*p
    }
    printf("\n");
    //����ָ������ļ���������ָ��������൱���м�ı����ĸ��������ǵ�ַ�����
    int *p = a;
    int *q = &a[4];

    printf("%d \n",p);
    printf("%d \n",q);
    printf("p-q:%d\n",q-p); //ָ�����ĵ�λʹ�õ��Ǳ�������int,����byte
    
    
    return 0;
}
