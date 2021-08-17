//队列，先进先出
//常用函数
//push()    进行入队
//front()  back()  或得首元素和尾元素
//pop()  首元素出队
//empty()  判断qeue是否为空
//size()  返回元素个数
//使用front和pop是要对queue进行判空
#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    printf("%d %d \n",q.front(),q.back());
    return 0;
}
