#include <cstdio>
#include <iostream>
using namespace std;
//进行1-n的全排列（重要）
//思路
//第一步：按顺序往p的第一位到第n位填写数字，for循环
//第二步：假设已经填好了p1-p（index-1），如果x不在之前的枚举中(使用散列进行判断)，p（index）=x
//第三步：处理index+1 进行递归，完成后还原x的散列属性
//第四步：终止条件的判断：index =n+1时，表示所有的元素都已经枚举完毕
//第五步：输出p
const int maxn = 11;
//P为当前的排列，hashTable记录整数在不在P中，初始化不在
int n, P[maxn], hashTable[maxn] = {false};

void generate(int index)  //index 索引序号
{
    //排序的出口
    if (index == n + 1)     //出口条件 index超过了n
    {
        for (int i = 1; i <= n; i++)   //便利打印p
        {
            printf("%d", P[i]);
        }
        printf("\n");
        return;    //return意味着退出generate函数  转跳到29行（对应的hashtable还原）
    }
    for (int x = 1; x <= n; x++)  //枚举以1-n为开头的全排列
    {                     
        if (hashTable[x] == false)   //判断当前位置开头的元素是否存在
        {
            P[index] = x;     //将x写入最后一个索引index的中
            hashTable[x] = true;   //标记使用过x
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
