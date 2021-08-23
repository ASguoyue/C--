#include<stdio.h>
#include<algorithm>

using namespace std;

struct mooncake
{
   double store;
   double sell;
   double price;
}cake[10000];

bool cmp(mooncake a, mooncake b){
    return a.price>b.price;
}


int main(int argc, char const *argv[])
{
    int n;  //几类
    double D;  //需求
    scanf("%d%lf",&n,&D);

    for (int i = 0; i < n; i++)
    {
       scanf("%lf",cake[i].store);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",cake[i].sell);
        cake[i].price = cake[i].sell/cake[i].store;
    }
    
    sort(cake,cake+n,cmp);
    double ans = 0;

    for (int i = 0; i < n; i++)
    {
        if(D <= cake[i].store){
            ans = ans+cake[i].price*D;
            break;
        }else{
            D= D-cake[i].store;
            ans = ans+cake[i].price;
        }
    }
    printf("%.2f \n",ans);
    
    return 0;
}
