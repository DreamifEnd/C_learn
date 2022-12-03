#include<iostream>
using namespace std;
double jie_cheng(int n)
{
	int i = 0;
	double s = 1;
	for (i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
double my_sin(double x)
{
	int n = 1;
	double s = 0,an = 0;
	while (fabs(an=pow(x, 2 * n - 1) / jie_cheng(2 * n - 1)) > 0.00001)
	{
		if (n % 2 == 0)
			s -= an;
		else
			s += an;
		n++;
	}
	return s;
}
int main()
{
	double x = 0;
	cin >> x;
	cout << my_sin(x)<<endl;
	return 0;
}