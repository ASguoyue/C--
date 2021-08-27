#include <algorithm>
#include <cstdio>

//区间不相交的定义
//相邻两个区间的重复的相交的最小部分，全包含则为最短的子链
using namespace std;

const int maxn = 110;

struct Inteval
{
    int x, y;

} I[maxn];

bool cmp(Inteval a, Inteval b)
{

    if (a.x != b.x)
    {
        return a.x > b.x;
    }
    else
    {
        return a.y < b.y;
    }
}

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &I[i].x, &I[i].y);
        }
        sort(I, I + n, cmp);
        int ans = 1, lastx = I[0].x;
        for (int i = 1; i < n; i++)
        {
            if (I[i].y <= lastx)
            {                   //如果新输入的区间的右端点在lastx的左边
                lastx = I[i].x; //i[i]作为新选中的的区间
                ans++; //不相交的个数加一
            }
        }
        printf("%d \n", ans);
    }
    return 0;
}