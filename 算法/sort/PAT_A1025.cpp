#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
struct student
{
    int id[15];       //准考证号
    int score;        // 分数
    int location_num; //考场号
    int local_rank;   //考场的排名
} stu[3000];

//重写比较函数 如果分数不同，按照从大到小排列（取大于号），如果分数相同，按照id从小到大排列（去小于号）
bool cmp(student a, student b)
{
    if (a.score != b.score)
    {
        return a.score > b.score;
    }
    else
    {
        return strcmp(a.id, b.id) < 0; //因为id是数组类型，使用strcmp来进行比较 a的大于b的返回0
    }
}

int main(int argc, char const *argv[])
{
    int num = 0, k, n;
    scanf("%d", &n); //输入考场数
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k); //为当前考场人数
        for (int j = 0; j < k; j++)
        {
            scanf("%s %d", stu[num].id, &stu[num].score); //获取当前考场学生的id和分数
            stu[num].location_num = i;                    //设置考场号
            num++;                                        //学生的名次加一
        }
        sort(stu + num - k, stu + num, cmp); //将该考场的考生进行排序 stu初始的地址，加学生的总数，减去当前考场的人数，就是当前考场中的第一号
        stu[num - k].local_rank = 1;         //将考场中的第一名的排名设置为1
        for (int i = num - k + 1; i < num; i++)
        {

            if (stu[i].score == stu[i - 1].score)
            {                                              //如果与前者分数相同
                stu[i].local_rank = stu[i - 1].local_rank; //二者考场的排序结果相同
            }
            else
            {
                //local_rank 为该考生之前的人数

                stu[i].local_rank = i + 1 - (num - k); //重要存疑，序号的定义 第一轮num为0，第二轮为k1，第三轮为k1+k2
            }
        }
    }
    printf("%d \n", num);

    sort(stu, stu + num, cmp); //所有考生排序
    int r = 1;
    for (int i = 0; i < num; i++)
    {
        if (i > 0 && stu[i].score != stu[i - 1].score)
        {
            r = i + 1;
        }
        printf("%s", stu[i].id);
        printf("%d %d %d \n", r, stu[i].location_num, stu[i].local_rank);
    }

    return 0;
}
