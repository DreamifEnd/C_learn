#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cin >>a>>b;
	int conset = 0;
	while(a!=b)
	{
		conset++;
		a>b?a-=b:b-=a;
	}
	cout<<conset+1;
	return 0;
}
