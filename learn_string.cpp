#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[10];
    gets(str);
    int len = strlen(str);
    printf("%d",len);
    printf("\n");
    char str1[10],str2[10];
    gets(str1);
    gets(str2);
    /*如果字符数组1 <字符数组2,则返回一个负整数(不同编译器处理不同，不一定是-1)。
    *如果字符数组1 = 字符数组2 , 则返回0
   如果字符数组1〉字符数组2 , 则返回一个正整数 */
    int cmp = strcmp(str1,str2);
    if (cmp  <0)
    {
        printf("str1 < str2");
    }else if (cmp ==0)
    {
        printf("str1 =str2");
    }else{
        printf("str1>str2");
    }
    printf("\n");
    char str3[10],str4[10];
    gets(str3);
    gets(str4);
    printf("%s %s \n",str3,str4);
    strcpy(str3,str4);
    printf("%s %s \n",str3,str4);
    return 0;
}
