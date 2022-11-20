#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20] = { 0 };
	char str2[20] = { 0 };
	cout << "请输入一个字符串\n";
	cin.getline(str1, 20);
	cout << "再输入一个字符串\n";
	cin.getline(str2, 20);
	cout<<strcmp(str1, str2);
	return 0;
}