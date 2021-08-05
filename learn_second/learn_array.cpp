#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[10]={3,2,4,3,5,6};
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    
    return 0;
}
