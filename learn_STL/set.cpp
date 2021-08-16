//set是STL中一种标准关联容器。它底层使用平衡的搜索树——红黑树实现，插入删除操作时仅仅需要指针操作节点即可完成，不涉及到内存移动和拷贝，所以效率比较高。
// 使用时注意包含头文件<set>    std::set and std::multiset associative containers
// s.begin()     　返回set容器的第一个元素
// s.end() 　　　　 返回set容器的最后一个元素
// s.clear()       删除set容器中的所有的元素
// s.empty() 　　　 判断set容器是否为空
// s.insert()      插入一个元素
// s.erase()       删除一个元素
// s.size() 　　　　返回当前set容器中的元素个数
#include<stdio.h>
#include<set>
using namespace std;
//除了vector和string 都不支持*(it+1)的访问方式
int main(int argc, char const *argv[])
{
    set<int> st;    //定义一个set容器
    st.insert(3);
    st.insert(5);
    st.insert(7);
    st.insert(3);
    for (set<int>::iterator it = st.begin(); it!=st.end(); it++)  //set的迭代器输出
    {
       printf("%d ",*it);  //对输出的结果进行了排序，并剔除了重复的元素
    }
    
    return 0;
}

