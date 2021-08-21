#include <cstdio>
#include <iostream>
using namespace std;

//即设定一个bool型数组hashTable[100010]，其中hashTable[x] = true表示正整数x 在 N 个正整数中出现过，
//而 hashTable[x] = false表示正整数x 在N 个正整数中没有出现过

const int maxn = 100010;
bool hashTable(maxn) = {false};
int main()
{
    int n, m, x;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        hashTable[x] = true;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        if (hashTable[x] == true)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }

    return 0;
}
