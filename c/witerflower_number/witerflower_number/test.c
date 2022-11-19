#include<stdio.h>
#include<math.h>
int int_len(int n)
{
	int i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}
void flower(int n,int c)
{
	int i = 0,j=0;
	double sum = 0;
	int yuan = n;
	for (i = 0; i < c; i++)
	{
		sum += pow((n % 10), c);
		n /= 10;
	
		
	}
	if(sum==yuan)
		printf("%.0f ",sum);
}
int main()
{
	int i = 0;
	int num = 0;
	for (i = 0; i < 10000; i++)
		flower(i, int_len(i));
	return 0;
}
