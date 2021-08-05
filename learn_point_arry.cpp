#include<stdio.h>


//指针函数使用
void change(int *p){
        *p = 244;
    }
int main(int argc, char const *argv[])
{
    int a[5]={1,2,3,4,5};
    //定义指针变量，并且指针变量支持自增操作，for循环中的写法
    //a代表数组，数组的名称也做为数组的首地址按使用,&a[0]
    for (int *i = a; i < a+5; i++)
    {
        /* code */
        printf("%d ",*i); //取指针的元素使用*p
    }
    printf("\n");
    //定义指针变量的减法，两个指针相减，相当于中间的变量的个数，不是地址的相减
    int *p = a;
    int *q = &a[4];

    printf("%d \n",p);
    printf("%d \n",q);
    printf("p-q:%d\n",q-p); //指针计算的单位使用的是变量类型int,不是byte
    
    int b = 4;
    int *n = &b;
    change(n);
    printf("b:%d",b);
    return 0;
}
 
