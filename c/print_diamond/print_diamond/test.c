/*
������Խ���ΪN������
*/
#include<stdio.h>
#define N 13		//�������εĳ��Խ��� 
int main()
{
	int i, j, z;
	for (i = 1; i <= N / 2 + 1; i++)
	{
		for (j = i; j < N / 2 + 1; j++)
			printf(" ");
		for (z = 1; z <= 2 * i - 1; z++)
		{
			printf("*");
			if (z == 2 * i - 1)
				printf("\n");
		}
	}
	for (i = 1; i <= N / 2; i++)
	{
		for (j = 1; j <= i; j++)
			printf(" ");
		for (z = 2 * i - 1; z <= N - 2; z++)
		{
			printf("*");
			if (z == N - 2)
				printf("\n");
		}
	}
	return 0;
}