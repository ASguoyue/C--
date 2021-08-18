#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[4]={1,24,23,-4};
    sort(a,a+4);   //a[0]-a[3]
    for (int i = 0; i < 4; i++)
    {
       printf("%d ",a[i]);
    }
    
    return 0;
}
