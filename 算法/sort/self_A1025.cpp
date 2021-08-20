#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

//定义结构体
struct Student
{
    char id[15];
    int score;
    int location_num;
    int location_rank;
} stu[30000];

//定义cmp比较函数

bool cmp(Student a, Student b)
{
    if (a.score != b.score)
    {
        return a.score > b.score;
    }
    else
    {
        return strcmp(a.id, b.id) < 0; //关于char的比较用strcmp 进行
    }
}

int main(int argc, char const *argv[])
{
    int num = 0; //考生的总数
    int n, k;    //考场数和每个考场的人数
    scanf("%d", &n);
    for (int i = 0; i < n; i++)   //进行考场数便利
    {
        scanf("%d", &k);
        for (int j = 0; j < k; j++)   //每个考场数的人数信息的循环
        {
            scanf("%s %d", &stu[num].id, &stu[num].score);
            stu[num].location_num = i + 1;
            num++;
        }
        sort(stu + num - k, stu + num, cmp); //对每次新加的考场总人数进行排序
        stu[num - k].location_rank = 1;
        for (int j = num - k + 1; j < num; j++)   //对其余的学生进行排名计算
        {
            if (stu[j].score == stu[j - 1].score)
            {
                stu[j].location_rank = stu[j - 1].location_rank;
            }
            else
            {
                stu[j].location_rank = j + 1 - (num - k); //该考生的排名减去第一名考生的排名
            }
        }
    }
    printf("%d\n", num);
    sort(stu, stu + num, cmp);
    int r = 1;
    for (int i = 0; i < num; i++)  //便利所有的学生并进行排名的计算
    {
        if (i > 0 && stu[i].score != stu[i - 1].score)
        {
            r = i + 1;
        }
        printf("%s %d %d %d\n", stu[i].id, r, stu[i].location_num, stu[i].location_rank);
    }
    return 0;
}
