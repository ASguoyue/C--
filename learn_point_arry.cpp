#include<stdio.h>


//ָ�뺯��ʹ��
void change(int *p){
        *p = 244;
    }
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
    
    int b = 4;
    int *n = &b;
    change(n);
    printf("b:%d",b);
    return 0;
}
 