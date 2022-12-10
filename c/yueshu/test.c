#include<stdio.h>
int main()
{
	double  i = 0;
	int count = 0;
	for(i = 1;i<1200000;i++)
	{
		if(1200000%i==0)
			count++;
	}
	printf("%d",count);
	return 0;
}
