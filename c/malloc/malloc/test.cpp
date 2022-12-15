#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int* p = NULL;
	int* tmp = (int*)realloc(p, 2 * sizeof(int));
	if (tmp == NULL)
	{
		return 1;
	}
	else
	{
		tmp[0] = 1;
	}
	printf("%d", tmp[0]);
	return 0;
}