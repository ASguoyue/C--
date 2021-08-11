#include<stdio.h>

// 引用不产生副本，而是给原来的变量起一个别名
void change(int &x){  //对函数参数的修改就是对原变量的修改
    x = 1;
}

//函数中的参数是参数，不是变量，在主程序没有值


//主程序中的变量才有真正的值

//同时对函数参数变量和主程序中的变量进行输出，显示结果为主程序变量
int main(int argc, char const *argv[])
{
    int a = 10;    
    change(a);
    printf("%d",a);
    return 0;
}
