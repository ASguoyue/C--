#include<stdio.h>
//ͨ������ʵ��ָ��������޸�

void swap(int*&p,int *&q){
    int *temp = p;
    p = q;
    q = temp;

}



int main(int argc, char const *argv[])
{
    int a = 1,b =2; 
    printf("%d ",&a);
    int *p = &a;
    int *q = &b;
    swap(p,q);
    printf("%d %d ",*p,*q);  //ֻ��ͨ��ָ���ȡ��Ž����˸ı䣬ӦΪ����Ĳ�����ָ������
    printf("%d %d \n",&a,p);  //ͨ����ӡa b�����������ᷢ���ı䣬ӦΪ��������ָ������������������ֵ
    printf("%d %d",&b,q);
    return 0;
}
