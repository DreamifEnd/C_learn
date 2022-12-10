#include<iostream>
using namespace std;
long long cal(int x= 30, int y = 20, int z = 10)
{
	return x * y * z;
}
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "输入长方体的长，宽，高：";
	cin >> a >> b >> c;
	long long n = cal(a, b, c);
	cout << "体积为：" << n;
	return 0;
}