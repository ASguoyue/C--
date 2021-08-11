#include<stdio.h>

int main()
{
    char str[5][5];
     printf("×Ö·û´®ÊäÈë \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            str[i][j] = getchar();

        }
        getchar();  
    }
    printf("×Ö·û´®Êä³ö \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            putchar(str[i][j]);
        }
        putchar('\n');

        
    }
    
    
    return 0;
}
