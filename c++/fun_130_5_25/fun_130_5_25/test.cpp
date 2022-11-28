#include<iostream>
using namespace std;
int power(int x,int n)
{
	if (1 == n)
		return x;
	return x * power(x, n - 1);
}
int main()
{
	int n = 0,x=0;
	cin >> x>>n;
	cout << power(x,n);
}