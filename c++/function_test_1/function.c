#include<stdio.h>
int add(int x, int y)
{
	return x+y;
}
int main()
{
	int a = 1;
	int b = 2;
	int c;
	c = add(a,b);
	printf("%d\n",c);
	return 0;
}
