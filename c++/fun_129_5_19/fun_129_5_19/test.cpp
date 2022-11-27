#include<iostream>
using namespace std;
int Judge_sushu(int n)
{
	int i = 0;
	for (i = 2; i < n - 1; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	int input = 0;
	cin >> input;
	int ret =Judge_sushu(input);
	if (1 == ret)
		cout  << "是素数";
	else
		cout  << "不是素数";
	return 0;
}