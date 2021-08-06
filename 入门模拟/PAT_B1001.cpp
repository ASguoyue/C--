//害死人不偿命的3n+1猜想
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,step=0;
    printf("请输入n：");
    scanf("%d",&n);
    while(n !=1){
        if (n%2==0)
        {
            n = n/2;
        }else{
            n = (3*n+1)/2;  
        }
        step++;  //step自增的条件应该是执行完n的赋值，无论是奇数还是偶数
    }
    printf("所需要的步数为： %d",step);

    return 0;
}
