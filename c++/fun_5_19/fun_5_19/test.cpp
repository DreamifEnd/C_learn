#include<iostream>
using namespace std;
float Change_temperature(int n)
{
	float z = 0;
	z = (n - 32) * 5.0 / 9;
	return z;
}
int main()
{
	int input = 0;
	cout << "请输入华氏温度值: ";
	cin >> input;
	float ret = Change_temperature(input);
	cout << "摄氏温度为: " << ret << endl;
	return 0;
}