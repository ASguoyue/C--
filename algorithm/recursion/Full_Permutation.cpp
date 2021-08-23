#include <cstdio>
#include <iostream>
using namespace std;
//进行全排列

const int maxn = 11;
//P为当前的排列，hashTable记录整数在不在P中，初始化不在
int n, P[maxn], hashTable[maxn] = {false};

void generate(int index)  //index 索引序号
{
    if (index == n + 1)     //
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d", P[i]);
        }
        printf("\n");
        return;
    }
    for (int x = 1; x <= n; x++)  //以1-n为开头的全排列
    {                     
        if (hashTable[x] == false)
        {
            P[index] = x;     //将x写入
            hashTable[x] = true;   
            generate(index + 1); 
            hashTable[x] = false;   //还原hashtable
        }
    }
}

int main(int argc, char const *argv[])
{
    n =3;   //代表长度
    generate(1);
    return 0;
}
