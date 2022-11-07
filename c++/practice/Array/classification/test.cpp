#include<iostream>
#define N 10
using namespace std;
int main()
{
	int i,you=0,liang=0,zhong=0,ji_ge=0,bu_jige=0;
	int a[N];
	cout<<"输入学生成绩: ";
	for(i=0;i<N;i++)
		cin>>a[i];
	for(i=0;i<N;i++)
		{
			if(a[i]>=90&&a[i]<=100)
				you++;
			else if(a[i]>=80&&a[i]<=89)	
				liang++;
			else if(a[i]>=70&&a[i]<=79)
				zhong++;
			else if(a[i]>=60&&a[i]<=69)	
				ji_ge++;
			else
				bu_jige++;		
		}
	cout<<"优秀人数: "<<you<<endl
		<<"良好人数: "<<liang<<endl
		<<"中等人数: "<<zhong<<endl
		<<"及格人数: "<<ji_ge<<endl
		<<"不及格人数: "<<bu_jige<<endl;
	return 0;
}
