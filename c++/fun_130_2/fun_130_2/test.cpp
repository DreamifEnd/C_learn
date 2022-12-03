#include<iostream>
using namespace std;
float px(float x, int n)
{
	if (1 == n)
		return x;
	if (n % 2 == 0)
		return px(x, n - 1) - pow(x, n);
	else
		return px(x, n - 1) + pow(x, n);
}
int main()
{
	float x = 0;
	int n = 0;
	cin >> x>> n;
	float ret = px(x,n);
	cout << ret;
	return 0;
}