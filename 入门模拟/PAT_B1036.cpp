//���°���һ����
#include<stdio.h>

int main()
{
    int row,col;
    char c;
    scanf("%d %c",&col,&c);  //%c��ȡ�ַ�
    if (col%2==1)
    {
        row = col/2+1;
    }else{
        row = col/2;  //colΪż��
    }
    //��1��
    for (int i = 0; i < col; i++)
    {
        printf("%c",c);  //col ���ַ�
        
    }
    printf("\n");
    //�ڶ��е�row-1��
    for (int i = 2; i < row; i++)
    {
        printf("%c",c);
        for (int j = 0; j < col-2; j++)
        {
            printf(" ");
        
        }
        printf("%c \n",c);
     
    }
    //���һ��
    for (int i = 0; i < col; i++)
    {
        printf("%c",c);  //col ���ַ� 
    }
   
    

    return 0;
}
