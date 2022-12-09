#include<iostream>
using namespace std;
long long cal(int x, int y, int z)
{
	return x * y * z;
}
int main()
{
	int a = 30, b = 20, c = 10;
	cout << "输入长方体的长，宽，高：";
	cin >> a >> b >> c;
	long long n = cal(a, b, c);
	cout << "体积为：" << n;
	return 0;
}