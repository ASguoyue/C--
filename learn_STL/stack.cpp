//栈的定义，先进后出
//push()  入栈
//top()  获得栈顶元素
//pop()  弹出栈顶元素

#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }
    for (int i = 1; i <= 3; i++)
    {
        st.pop();      //3 4 5出站了
    }
    printf("%d \n",st.top());
    return 0;
}
