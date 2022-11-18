#include<iostream>
using namespace std;
int main(){
	int i;
	int a[20]={0,0,2,5} ;
	for(i=4;i<20;i++)
	{	
	a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
		}
	for(i=0;i<20;i++)
	{cout<<a[i]<<'\t';
	if(i%4==0&&i!=0)
	cout<<endl;
	}
	
	return 0;
}
