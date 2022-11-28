#include<iostream>
using namespace std;
int _and (int n)
{
	if (1 == n)
		return 1;
	return n + _and (n - 1);
}
int main()
{
	int input = 0;
	cin >> input;
	cout<< _and (input);
	return 0;
} 