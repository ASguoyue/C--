// 挖掘机技术哪家强

#include<stdio.h>
const int maxn = 10000;  //参赛人数

int school[maxn] ={0};  // 用于记录学校的总分
int main(int argc, char const *argv[])
{
    int n;
    printf("请输入参赛的人数");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int id,score;
        scanf("%d%d",&id,&score);
        school[id]+=score;  //对应学校的位置的score相加
    }
    
    int k,MAX=0;
    for (int i = 0; i < maxn; i++)
    {
        if (school[i]>MAX)
        {
            MAX = school[i];
            k = i;
        }
    }
    printf("%d %d",k,MAX);
    
    return 0;
}
