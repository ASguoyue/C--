// �ھ�������ļ�ǿ

#include<stdio.h>
const int maxn = 10000;  //��������

int school[maxn] ={0};  // ���ڼ�¼ѧУ���ܷ�
int main(int argc, char const *argv[])
{
    int n;
    printf("���������������");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int id,score;
        scanf("%d%d",&id,&score);
        school[id]+=score;  //��ӦѧУ��λ�õ�score���
    }
    
    int k,MAX=0;
    for (int i = 0; i < maxn; i++)
    {
        if (school[i]>MAX)
        {
            MAX = school[i];
            k = i;
        }
    }
    printf("%d %d",k,MAX);
    
    return 0;
}
