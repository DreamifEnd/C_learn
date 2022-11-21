#include<iostream>
using namespace std;
int main()
{
	char str1[40], str2[20], str[40];
	int i = 0, j = 0;
	cin.getline(str1, 20);
	cin.getline(str2, 40);
	while (str1[i] != '\0')
	{
		str[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	cout << str << endl;
	return 0;
}