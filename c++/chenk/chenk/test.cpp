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
	cout << "���ܳɼ��ɵ͵�������Ϊ:\n";
	for(i=0;i<5;i++)//5������
		for (n= 1; n< 5 - i; n++)//����������
		{
			if (arr[i][4] > arr[i + n][4])//��̨
			{
				for (m = 0; m < 5; m++)//ͨ�����������齫�������ݽ���
				{
					temp[m] = arr[i][m];
					arr[i][m] = arr[i + n][m];
					arr[i + n][m] = temp[m];
				}
			}
		}
	for (i = 0; i < 5; i++)//�����������
	{
		for (j = 0; j < 5; j++)
			cout << arr[i][j]<<'\t';
		cout << endl;
	}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (arr[i][j] < 60)
			{
				cout << "���ϸ�ͬѧΪ: \n";
				cout << arr[i][0] <<'\t' << arr[i][j]<<'\t';
				switch (j)
				{
				case 1:cout << "��ѧ"; break;
				case 2:cout << "����"; break;
				case 3:cout << "����"; break;
				}
			}

	return 0;
}