#include<iostream>
using namespace std;
#define N 10
void print(int* a)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		cout << a[i] << '\t';
	}
}
void sort(int* a)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	//for(i=0;i<N-1;i++)
	//	for(j=0;j<N-1-i;j++)
	//		if (a[j] > a[j + 1])
	//		{
	//			temp = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = temp;
	//		}

	//for(i=0;i<N-1;i++)
	//	for(j=i;j<N-1;j++)
	//		if(a[i]>a[j+1])
	//		{
	//			temp = a[i];
	//			a[i] = a[j+1];
	//			a[j+1] = temp;
	//		}
	for (i = 0; i < N - 1; i++)
	{
		int k = i; 
		for (j = i + 1; j < N; j++)
			if (a[k] > a[j])
				k = j;
		if (k > i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
 	}
}
int main()
{
	int a[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
		cin >> a[i];
	sort(a);
	print(a);
	return 0;
}