#include<stdio.h>
#include<vector>
#include<algorithm>


using namespace std;
bool cmp(int a,int b){
    return a>b;   //按照从大到小排列
}
int main(int argc, char const *argv[])
{
    vector<int> vi;
    vi.push_back(2);
    vi.push_back(1);
    vi.push_back(3);
    sort(vi.begin(),vi.end(),cmp);
    for (int i = 0; i < 3; i++)
    {
       printf("%d ",vi[i]);
    }
    
    return 0;
}
