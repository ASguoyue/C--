#include<cstdio>
#include<algorithm>
using namespace std;

//�����±��Ľṹ��
struct mooncake
{
    double store;  //���   
    double sell;   //����
    double price;   //�۸�

}cake[1000];

//����ȽϺ���
bool cmp(mooncake a,mooncake b){
    return a.price>b.price;      //���ռ۸��ɸߵ�������
}


int main(int argc, char const *argv[])
{
    int n ;    //�����±�
    double D;   //������
    scanf("%d%lf",&n,&D);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&cake[i].store);  
    }
    for (int i = 0; i < n; i++)
    {
       scanf("%lf",&cake[i].sell);
       cake[i].price = cake[i].sell/cake[i].store;   //���㵥��
    }
    sort(cake,cake+n,cmp);   //���ռ۸�Ӹߵ�������
    double ans = 0;    //������
    for (int i = 0; i < n; i++)
    {
        if (cake[i].store<=D)   //�������i��Ŀ��
        {
            D-=cake[i].store;  //�ȳ��ֵ�i���ȫ����棬��������D
            ans+=cake[i].store*cake[i].price;  //�����ǵ�i���ȫ���ۼ�

        }else{
            ans += cake[i].price*D;  //����С�ڿ�棬���۸���ߵľ���
            break;
        }
        
    }
    printf("%.2f\n",ans);
    
    return 0;
}
