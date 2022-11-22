#include<iostream>
#include<iomanip>
using namespace std;
#define N 7
int main()
{
	int arr[N][N] = { 0 };
	arr[0][0] = 1;
	int i = 0, j = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j <= i; j++)
		{
			if (i == 1||j==0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	int n = 0;
	j=0;
	//for (i = 0; i < N; i++)
	//{
	//	for (n = 0; n <= N - j - 1; n++)
	//		cout << "    ";
	//	for (j = 0; j <= i; j++)
	//		cout << arr[i][j] << "        ";
	//	cout << endl;
	//}
	for (i = 0; i < N; i++)
	{
		cout << setw(25 - 3 * i);
		for (j = 0; j <= i; j++)
			cout << arr[i][j] << setw(6);
		cout << endl;
	}
	return 0;
}