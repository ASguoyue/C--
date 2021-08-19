//lower_bound(first,last,val)
//寻找first，last内第一个值小于等于val的元素位置
//寻找first，last内第一个值大于等于val的元素位置
//数组返回指针，容器则返回迭代器
#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[10] ={1,2,2,2,3,3,3,5,5,5};
    int* lowerPos = lower_bound(a,a+10,-1);
    int* upperPos = upper_bound(a,a+10,-1);
    printf("%d, %d\n",lowerPos-a,upperPos-a);  //指针地址减a[0] 是代表的距离
    //寻找1
    int* lower_Pos = lower_bound(a,a+10,3);
    int* upper_Pos = upper_bound(a,a+10,3);
    printf("%d,%d \n",lower_Pos-a,upper_Pos-a);
    
    //寻找2
    int* lowerPos2 = lower_bound(a,a+10,2);  //lowerPos2是一个地址
    int* upperPos2 = upper_bound(a,a+10,2);
    printf("%d,%d \n",lowerPos2-a,upperPos2-a);  //返回的是个数，不是下标数，下标数应该减一
    return 0;
}
