//�����˲�������3n+1����
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,step=0;
    printf("������n��");
    scanf("%d",&n);
    while(n !=1){
        if (n%2==0)
        {
            n = n/2;
        }else{
            n = (3*n+1)/2;  
        }
        step++;  //step����������Ӧ����ִ����n�ĸ�ֵ����������������ż��
    }
    printf("����Ҫ�Ĳ���Ϊ�� %d",step);

    return 0;
}
