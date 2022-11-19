#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int input = 0;
	int sum = 0;
	scanf("%d", &input);
	int i = 0;
	int tmp = input;
	for(i=1;i<=5;i++)
	{	
		sum += input;
		input = input + tmp * pow(10,i);//2 2+20//22 22 200// 222 222+2000// 2222 2222+20000
	}
	printf("%d", sum);
	return 0;
}