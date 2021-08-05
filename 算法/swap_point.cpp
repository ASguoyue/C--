#include<stdio.h>
//通过引用实现指针变量的修改

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
    printf("%d %d ",*p,*q);  //只能通过指针获取后才进行了改变，应为传入的参数是指针类型
    printf("%d %d \n",&a,p);  //通过打印a b两个变量不会发生改变，应为主函数定义的值
    printf("%d %d",&b,q);
    return 0;
}
