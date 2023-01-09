#include<iostream>
using namespace std;
int main()
{
	char a;
	int cost = 0;
	while(cin.getchar())
	{
		if(a='\n')
		break;
		cost++;
	}
	cout<<cost<<endl;
	return 0;
}
