#include <cstdio>

int main(int argc, char const *argv[])
{
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &count[i]);
    }

    for (int i = 1; i < 10; i++)  // 从1-9输出最小的
    {
        if (count[i] > 0)
        {
            printf("%d", i);
            count[i]--;  // 计数减一
            break; //跳出
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            printf("%d", i);
        }
    }

    return 0;
}
