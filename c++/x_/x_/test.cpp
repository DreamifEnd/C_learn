#include<iostream>
#define N 5
using namespace std;
int main()
{
	int arr[N][N] = { 0 };
	int i = 0,j = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			cin >> arr[i][j];
	int max = arr[0][0];
	int min = arr[0][0];
	int row_1 = 0, row_2 = 0, col_1 = 0, col_2 = 0;
	for(i=0;i<N;i++)
		for (j = 0; j < N; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				row_1 = i;
				col_1 = j;
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
				row_2 = i;
				col_2 = j;
			}
		}
	cout << "最大值为: " << max << endl
		<< "所在的行为: " << row_1 << endl
		<< "所在的列为: " << col_1 << endl;
	cout << "最小值为: " << min << endl
		<< "所在的行为: " << row_2 << endl
		<< "所在的列为: " << col_2 << endl;
	int sum = 0; 
	for (i = 0; i < N; i++)
		sum += arr[i][i];
	cout << "主对角线和为: " << sum;
	sum = 0;
	for (i = N; i > 0; i--)
		sum += arr[i-1][N - i];
	cout << "副对角线和为: " << sum;
	return 0;
}