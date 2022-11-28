#include<iostream>
using namespace std;
int jie_cheng(int n)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
		sum += i * i;
	return sum;
}

int main()
{
	int sum = jie_cheng(12) + jie_cheng(15) * jie_cheng(15);
	cout<<sum;
	return 0;
}