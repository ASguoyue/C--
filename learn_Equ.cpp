#include<stdio.h>
#include<math.h>

const double eps = 1e-8;    //���ȳ���
#define Equ(a,b) ((fabs((a)-(b)))<(eps))  //���庯��

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
