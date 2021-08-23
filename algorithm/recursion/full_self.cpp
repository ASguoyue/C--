#include<cstdio>

const int maxn= 11;

int n,P[maxn],hashTable[maxn]={false} ;

void generate(int index){
    if (index ==n+1)
    {
        for (int i = 1; i <=n; i++)
        {
            printf("%d",P[i]);
        }
        printf("\n");
        return;  
    }
    for (int x = 1; x <=n; x++)   //枚举
    {
        if (hashTable[x] ==false)
        {
            P[index] = x;
            hashTable[x] = true;
            generate(index+1);
            hashTable[x] = false;

        }
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    n = 3;
    generate(1);
    return 0;
}
