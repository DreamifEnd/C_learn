#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char arr[50] ={0};
	scanf("%s",arr);
	for(int i = 0;arr[i]!='\0';i++)
	{
		putchar((arr[i]-'a'+n)%26+'a');
	}
	return 0;
 } 
