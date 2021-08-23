#include<stdio.h>

//递归函数
int F(int n ){
    if(n ==0) return 1;     //最后一层中的输出为1
    else return F(n-1)*n;    //递归表达式  
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%d",F(n));
    return 0;
}
