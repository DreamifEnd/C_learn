#include<iostream>
using namespace std;
float px(float x, int n)
{
	float p;
	if (1 == n)
		p = x;
	//return x;
/*if (n % 2 == 0)
	return px(x, n - 1) - pow(x, n);
else
	return px(x, n - 1) + pow(x, n);*/
	else
		p = px(x, n - 1) + pow(-1, n) * pow(x, n);
	return p;
}
int main()
{
	float x = 0;
	int n = 0;
	cout << "输入x和n的值：";
	cin >> x>> n;
	float ret = px(x,n);
	cout << ret;
	return 0;
}