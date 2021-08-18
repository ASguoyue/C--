#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[4]={1,24,23,-4};
    sort(a,a+4);   //a[0]-a[3]
    for (int i = 0; i < 4; i++)
    {
       printf("%d ",a[i]);
    }

    char c[]={'T','r','Y','V','D','y'};
    sort(c,c+6);  //×ó±ÕÓÒ¿ª
    for (int i = 0; i < 6; i++)
    {
        printf("%c ",c[i]);
    }
    
    
    return 0;
}
