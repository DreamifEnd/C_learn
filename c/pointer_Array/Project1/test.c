#include<stdio.h>
int main()
{
	int arr[10] = {2,34,12,7,4,58,91,34,35,10};
	int* pa = &arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
		printf("%d ", * (pa + i));
	return 0;
}