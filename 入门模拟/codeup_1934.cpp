//找x

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int num[200];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    int x,out,k;
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (x == num[i])
        {
            out = num[i];
            k=i;
            printf("%d",k);
            break;          //退出查找，直接退出for循环
        }  
    }
    if (k==n)   //多判断一下是否结束，对比到最后一个元素
        {
           printf("-1 \n");
        }
    
    return 0;
}
