#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int print_fb(int n)
{
	if (n <= 2)
		return 1;
	else
		return print_fb(n - 1) + print_fb(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d",print_fb(n));
	return 0;
}