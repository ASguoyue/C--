#include <stdio.h>
int main()
{
    int a[3][3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d", &a[i][j][k]);
                a[i][j][k]++;
            }




        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d", a[i][j][k]); //输出三维数组 a 的元素
            }
        }
    }
    return 0;
}