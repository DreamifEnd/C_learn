#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20] = { 0 };
	char str2[20] = { 0 };
	cout << "������һ���ַ���\n";
	cin.getline(str1, 20);
	cout << "������һ���ַ���\n";
	cin.getline(str2, 20);
	cout<<strcmp(str1, str2);
	return 0;
}