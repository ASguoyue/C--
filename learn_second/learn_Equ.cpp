#include<stdio.h>
#include<math.h>

const double eps = 1e-8;    //精度常量
#define Equ(a,b) ((fabs((a)-(b)))<(eps))  //定义函数

int main(int argc, char const *argv[])
{
    double db = 1.23;
    if (Equ(db,1.23))
    {
        printf("true");
    }else
    {
        printf("false");
    }
    
    return 0;
}
