#include<iostream>
using namespace std;
long long cal(int x, int y, int z)
{
	return x * y * z;
}
int main()
{
	int a = 30, b = 20, c = 10;
	cout << "���볤����ĳ������ߣ�";
	cin >> a >> b >> c;
	long long n = cal(a, b, c);
	cout << "���Ϊ��" << n;
	return 0;
}