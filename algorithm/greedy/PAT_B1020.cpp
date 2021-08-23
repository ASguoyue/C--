#include<cstdio>
#include<algorithm>
using namespace std;

//定义月饼的结构体
struct mooncake
{
    double store;  //库存   
    double sell;   //销量
    double price;   //价格

}cake[1000];

//定义比较函数
bool cmp(mooncake a,mooncake b){
    return a.price>b.price;      //按照价格由高到低排序
}


int main(int argc, char const *argv[])
{
    int n ;    //几类月饼
    double D;   //需求量
    scanf("%d%lf",&n,&D);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&cake[i].store);  
    }
    for (int i = 0; i < n; i++)
    {
       scanf("%lf",&cake[i].sell);
       cake[i].price = cake[i].sell/cake[i].store;   //计算单价
    }
    sort(cake,cake+n,cmp);   //按照价格从高到低排序
    double ans = 0;    //总利润
    for (int i = 0; i < n; i++)
    {
        if (cake[i].store<=D)   //需求大于i类的库存
        {
            D-=cake[i].store;  //先出手第i类的全部库存，更新需求D
            ans+=cake[i].store*cake[i].price;  //获利是第i类的全部售价

        }else{
            ans += cake[i].price*D;  //需求小于库存，卖价格最高的就行
            break;
        }
        
    }
    printf("%.2f\n",ans);
    
    return 0;
}
