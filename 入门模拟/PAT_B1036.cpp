//跟奥巴马一起编程
#include<stdio.h>

int main()
{
    int row,col;
    char c;
    scanf("%d %c",&col,&c);  //%c读取字符
    if (col%2==1)
    {
        row = col/2+1;
    }else{
        row = col/2;  //col为偶数
    }
    //第1行
    for (int i = 0; i < col; i++)
    {
        printf("%c",c);  //col 的字符
        
    }
    printf("\n");
    //第二行到row-1行
    for (int i = 2; i < row; i++)
    {
        printf("%c",c);
        for (int j = 0; j < col-2; j++)
        {
            printf(" ");
        
        }
        printf("%c \n",c);
     
    }
    //最后一行
    for (int i = 0; i < col; i++)
    {
        printf("%c",c);  //col 的字符 
    }
   
    

    return 0;
}
