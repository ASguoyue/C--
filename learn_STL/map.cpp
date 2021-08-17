//map 意为映射，类如数组s[3]=20 int->int 的映射  db[0]=3.14 int->double
//如果用“字符串->页码的”映射，可以使用map
// map可以将任何的基本类型（包括stl容器）映射到任意的基本类型（包括stl容器）
//使用 #include<map> using name std;
//可以通过下标和迭代器访问  map中的键是唯一的 值可以改变
#include<iostream>
#include<map>
using namespace std;

int main(int argc, char const *argv[])
{
    //定义map
    map<char,int> mp;
    mp['c']=20;
    mp['c']=30;
    printf("%d \n",mp['c']); //重新赋值
    

    return 0;
}
