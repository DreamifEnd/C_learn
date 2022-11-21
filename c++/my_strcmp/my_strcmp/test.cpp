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
	int i = 0, n = 0;
	for(i = 0;;i++)
		if (str1[i] != str2[i]||str1[i]=='\0'||str2[i] == '\0')
		{
			n = str1[i] - str2[i];
			break;
		}
	cout << n;
	return 0;
}