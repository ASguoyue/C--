#include<stdio.h>


//���庯����ָ������
void swap(int *a,int *b){
    int temp;            //һ��Ҫ��ʼ��temp
    temp = *a;
    *a = *b ;
    *b =temp;

}

int main()
{
    int a =1,b=2;
    int *p=&a,*q = &b;
    int temp;
    temp =a;
    a = b;
    b = temp;
    printf("%d %d \n",a,b);
    swap(p,q);
    printf("%d %d ",a,b);
    return 0;
}
