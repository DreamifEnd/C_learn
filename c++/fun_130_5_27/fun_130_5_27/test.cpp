#include<iostream>
using namespace std;
void input(int s[6][5])
{
	cout << "输入学号与成绩" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> s[i][j];
		}
	}
}
void calculate(int s[6][5])
{
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 1; j < 4; j++)
		{
			sum += s[i][j];
		}
		s[i][4] = sum;
	}
}
void output(int s[6][5])
{
	for (int j = 1; j < 5; j++)
	{
		int max = s[0][j];
		for (int i = 0; i < 5; i++)
		{
			if (s[i][j] > max)
				max = s[i][j];
		}
		s[5][j] = max;
	}
}
int main()
{
	int a[6][5];
	input(a);
	calculate(a);
	output(a);
	cout << "学号" << '\t' << "数学" << '\t' << "语文" << '\t' << "外语" << '\t' << "总成绩" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "最高分" << '\t';
	for (int j = 1; j < 5; j++)
		cout << a[5][j] << '\t';
	return 0;
}