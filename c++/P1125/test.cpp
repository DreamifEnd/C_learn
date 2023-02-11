#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char arr[100] = {0};
	cin.getline(arr,100);
	char te[26] ={0};
	int max = 0;
	char cmin;
	int min =26;
	int i = 0;
	while(arr[i]!='\0')
	{
		int num = arr[i]-'a';
		te[num]++;
		i++;
	}
	for(int i = 0;i < 26;i++)
	{
		if(te[i]>max)
		{
			max = te[i];
		}
		if(te[i]<min&&te[i]!=0)
		{
			min = te[i];
		}
	}
	
	int n = max-min;
	int bo = 0;
	if(n==0||n==1)
	{
		cout<<"No Answer"<<endl;
		cout<<'0'<<endl;
		return 0;
	}
	for(int i = 2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			cout<<"No Answer"<<endl;
		    cout<<'0'<<endl;
			return 0;
		}
	}
	cout<<"Lucky Word"<<endl;
	cout<<n<<endl;
	return 0;
 } 
