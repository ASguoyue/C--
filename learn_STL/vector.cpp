//vector 可变长度素组  vector<int> name;
//访问方式：1、通过下标访问，2、通过迭代器进行访问（定义的类似指针）

#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> vi;
    for (int i = 1; i <= 5; i++)
    {
        vi.push_back(i);   //在末尾添加元素i
    }
    vector<int>::iterator it = vi.begin();  //begin获取vi的首地址，it指向这个地址，it是个指针类型
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*(it+i));   //指针的形式读取输出
    }
    //vector的迭代器不支持it<vi.end()的写法，终止条件用！=vi.end()
    for (vector<int>::iterator it = vi.begin(); it!=vi.end(); it++)
    {
        printf("%d ",*it);
    }
    
    //vector中的常用函数
    //vi.push_back()  插入尾部
    // vi.pop_back()  删除尾元素
    // vi.size() 获取vi中的元素个数
    // vi.clear() 清空vi
    // vi.insert(i,x) 在i位置插入x
    // vi.erase(i) 删除i单个元素 erase的返回值是一个迭代器，指向删除元素下一个元素。
    //vi.erase(i,j) 删除i到j中的元素 返回下一个指针
    return 0;
}

