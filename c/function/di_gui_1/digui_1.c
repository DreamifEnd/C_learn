#include<stdio.h>
int my_strlen(char* n)
{
	if (*n != '\0')
		return	1 + my_strlen(n+1);
	else
		return 0;
}
int main() {

	char arr[] = "abc";
	printf("%d\n", my_strlen(arr));

	return 0;
}