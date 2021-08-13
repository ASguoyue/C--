#include<stdio.h>
#include<set>
using namespace std;
//除了vector和string 都不支持*(it+1)的访问方式
int main(int argc, char const *argv[])
{
    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(7);
    st.insert(3);
    for (set<int>::iterator it = st.begin(); it!=st.end(); it++)
    {
       printf("%d ",*it);  //对输出的结果进行了排序，并剔除了重复的元素
    }
    
    return 0;
}
