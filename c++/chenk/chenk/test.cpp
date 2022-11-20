#include<iostream>
using namespace std;
int main()
{
	int arr[5][5] = { 0 };
	int temp[5] = { 0 };
	int i = 0, j = 1001;
	for (i = 0; i < 5; i++)
		arr[i][0] = j++;
	for (i = 0; i < 5; i++)
		for (j = 1; j < 4; j++)
			cin >> arr[i][j];
	for (i = 0; i < 5; i++)
		arr[i][4] = arr[i][3] + arr[i][2] + arr[i][1];
	int n = 0,m=0;
	cout << "按总成绩由低到高排序为:\n";
	for(i=0;i<5;i++)//5个数据
		for (n= 1; n< 5 - i; n++)//在列里排序
		{
			if (arr[i][4] > arr[i + n][4])//擂台
			{
				for (m = 0; m < 5; m++)//通过第三方数组将两行数据交换
				{
					temp[m] = arr[i][m];
					arr[i][m] = arr[i + n][m];
					arr[i + n][m] = temp[m];
				}
			}
		}
	for (i = 0; i < 5; i++)//遍历数组输出
	{
		for (j = 0; j < 5; j++)
			cout << arr[i][j]<<'\t';
		cout << endl;
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (arr[i][j] < 60)
			{
				cout << "不合格同学为: \n";
				cout << arr[i][0] <<'\t' << arr[i][j]<<'\t';
				switch (j)
				{
				case 1:cout << "数学"; break;
				case 2:cout << "语文"; break;
				case 3:cout << "外语"; break;
				}
			}

	return 0;
}