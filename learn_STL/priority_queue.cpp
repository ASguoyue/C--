
//优先队列
#include <iostream>
#include <queue>
using namespace std;

struct fruit
{
    int price;
    string name;
    friend bool operator <(fruit f1, fruit f2)  //以价格为优先级比较项，重写了<的定义，不写没法进行比较
    { //重新写<功能
        return f1.price > f2.price;
    }
} f1, f2, f3;

int main(int argc, char const *argv[])
{
    /* code */
    priority_queue<int> q; //默认定义是数字越大优先级越高
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);
    printf("%d \n", q.top()); //top返回优先级最高的元素 也就是堆顶元素

    priority_queue<fruit> p;
    f1.name = "桃子"; f1.price = 3;
    f2.name = "苹果"; f2.price = 1;
    f3.name = "莉"; f3.price = 2;
    p.push(f1);
    p.push(f2);
    p.push(f3);
    cout<<p.top().name<<" "<<p.top().price<<endl;  //因为之前重新定义了<,相当于倒置了数组，所以会打印1
    
    
    return 0;
}
