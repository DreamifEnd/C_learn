#include<stdio.h>
int ke_le(int n, int* sum)
{
	*sum += n;
	if (n < 2)
		return *sum;
	ke_le(n / 2,sum);
}
int main()
{
	int n = 20;
	int sum = 0;
	printf("%d",ke_le(n, &sum));
	return 0;
}