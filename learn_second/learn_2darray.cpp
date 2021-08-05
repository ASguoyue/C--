#include<stdio.h>
//ЖўЮЌЪ§Он
int main(int argc, char const *argv[])
{
    int a[5][6]={{3,2,3},{8,4},{},{3,4,5,2}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
