#include<stdio.h>
void reverse_string(char* n, int a)
{
	int temp = 0;
	if (n != n+a-1)
	{
		temp = *n;
		*n = n[a-1];
		*(n + a) = temp;
		reverse_string(n + 1, a-1);
	}
	

}
int main()
{
	char arr[] = "abcdef";
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse_string(arr,sz);
	printf("%s", arr);
	return 0;
}