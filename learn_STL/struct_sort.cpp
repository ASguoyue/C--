#include<stdio.h>
#include<algorithm>

using namespace std;

struct node
{
    int x,y;    
} ssd[10];

//定义比较大小函数cmp，cmp作为sort的第三个参数
bool cmp(node a,node b){
    return a.x>b.x;      //按照结构体中x的值从小到大进行排序
}
int main(int argc, char const *argv[])
{
    /* code */
    ssd[0].x = 2;
    ssd[0].y = 2;
    ssd[1].x= 1;
    ssd[1].y = 3;
    ssd[2].x=3,
    ssd[2].y=1;
    sort(ssd,ssd+3,cmp);
    for (int i = 0; i < 3; i++)
    {
        printf("%d %d \n",ssd[i].x,ssd[i].y);
    }
    
    return 0;
}
