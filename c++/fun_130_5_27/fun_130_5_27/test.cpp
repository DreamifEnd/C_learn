#include<iostream>
using namespace std;
void input(int s[6][5])
{
	cout << "����ѧ����ɼ�" << endl;
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
	cout << "ѧ��" << '\t' << "��ѧ" << '\t' << "����" << '\t' << "����" << '\t' << "�ܳɼ�" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "��߷�" << '\t';
	for (int j = 1; j < 5; j++)
		cout << a[5][j] << '\t';
	return 0;
}