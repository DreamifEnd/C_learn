#include<iostream>
using namespace std;
long long cal(int x= 30, int y = 20, int z = 10)
{
	return x * y * z;
}
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "���볤����ĳ������ߣ�";
	cin >> a >> b >> c;
	long long n = cal(a, b, c);
	cout << "���Ϊ��" << n;
	return 0;
}