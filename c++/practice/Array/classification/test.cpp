#include<iostream>
#define N 10
using namespace std;
int main()
{
	int i,you=0,liang=0,zhong=0,ji_ge=0,bu_jige=0;
	int a[N];
	cout<<"����ѧ���ɼ�: ";
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
	cout<<"��������: "<<you<<endl
		<<"��������: "<<liang<<endl
		<<"�е�����: "<<zhong<<endl
		<<"��������: "<<ji_ge<<endl
		<<"����������: "<<bu_jige<<endl;
	return 0;
}
