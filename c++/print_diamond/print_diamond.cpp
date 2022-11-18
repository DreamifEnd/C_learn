/*

输出长对角线为N的菱形

*/
#include<iostream>
#define N 7		//更改菱形的长对角线 
using namespace std;
int main()
{
	int i, j, z;
	for (i = 1; i <= N / 2 + 1; i++)
	{
		for (j = i; j < N / 2 + 1; j++)
			cout << " ";
		for (z = 1; z <= 2 * i - 1; z++)
		{
			cout << "*";
			if (z == 2 * i - 1)
				cout << endl;
		}
	}
	for ( i=1; i<= N/2 ;i++ )
	{
		for (j=1; j<=i; j++)
			cout << " ";
		for (z =2*i-1; z <= N - 2; z++)
		{
			cout << "*";
			if (z == N - 2)
				cout << endl;
		}
	}
	return 0;
}
