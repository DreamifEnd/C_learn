#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char arr[10000] = { 0 };
	int i = 0,j = 0;
	while (gets(arr+i)!='\n');	
	{
		i++;
	}
	for (i = 0; i < j; i++)
		printf("%c", *(arr + i));
	return 0;
}


