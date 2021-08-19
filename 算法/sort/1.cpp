#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Student{
	char id[15];//准考证号 
	int socre;//分数 
	int location_number;//考场号 
	int local_rank;//考场内排名 
}stu[30010]; 
//------------------------------------------------------------------------------------
bool cmp(Student a,Student b){
	//按分数从高到底排序
	if(a.socre!=b.socre){
		return a.socre>b.socre;
	} else{
		//分数相同按准考证从小到大排序
		return strcmp(a.id,b.id)<0;//说明a的id小于b的id 
	}
}
//-----------------------------------------------------------------------------------------
int main(){
	int n,k,num=0; //num为总考生数，n为有几个考场，k为该考场人数 
	scanf("%d",&n);//n为考场数 
	//下面输入2个考场的id和score
	for(int i=1;i<=n;i++){//遍历考场,从1开始，不能没有一个考场吧 
		//遍历每一个考场的考生的id和score
		scanf("%d",&k);//输入每一个2考场的人数 
		for(int j=0;j<k;j++){
			//输入考生信息
			scanf("%s %d",&stu[num].id,&stu[num].socre);
			stu[num].location_number=i; 
			num++;//总考生数加1 
		} 
	
//---------------------------------------要对每个考场考生进行排序，因为最后要输出考场内排名------------------------------------------------------------ 
	//将该考场的考生排序，输入了2个考场的考生
	//假设这个考场共k个考生，总人数为num，把考生信息存在数组中，数组下标的区间就是[num-k,num) 
	//排序直接用sort函数
	sort(stu+num-k,stu+num,cmp);
	//把该考场的第一个排名为1
	stu[num-k].local_rank=1;
	//除了第一个，对其余考生进行排序
	for(int j=num-k+1;j<num;j++){//不能等于num，因为取不到 
//---------------------------------------------------------------------------------------------------
	//如果同分 
		if(stu[j].socre==stu[j-1].socre){
			stu[j].local_rank=stu[j-1].local_rank;
		} else{
	//如果不同分，那么该位考生前面有多少人呢，注意考生排名和存考生信息数组下标之间差了1，
	//那么计算考生排名的时候j要加1再减去第一名的local_rank，才是该考生的local_rank,因为j是考生信息的数组下标 
			 stu[j].local_rank=j+1-(num-k);//该考生的排名减去第一个考生的排名就是他前面有多少人
			 
		}
	} 
}
//----------------------------二个考场所有考生一起排序,输出准考证号，排名,考场号，和考场内排名---------------------------------------------
    printf("%d\n",num);//输出考生总人数
	sort(stu,stu+num,cmp);//将所有考生排序
	int r=1;//当前考生的排名
	for(int i=0;i<num;i++){
		if(i>0&&stu[i].socre!=stu[i-1].socre){
			r=i+1;//考生排名加1 
		}
		
		printf("%s %d %d %d\n",stu[i].id,r,stu[i].location_number,stu[i].local_rank); 
	} 
		
	
}






