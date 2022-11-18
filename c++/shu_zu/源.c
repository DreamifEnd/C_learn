#include<stdio.h>
#define N 5
int main()
{
	int i, j, temp;
	int a[N] = { 7.3,6,8,9 };
	for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;


			}
	for (i = 0; i < N; i++)
		printf("%d\n", a[i]);


	return 0;
}