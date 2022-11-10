#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i;
	for (i = 1; i <= 599; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if ((i % 3 == 0) && (c == 5 || b == 5 || c == 5))
			cout << i << endl;
	}
	return 0;
}