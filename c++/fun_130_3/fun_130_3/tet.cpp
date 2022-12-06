#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
void str_cat(char* s, char* s1, char* s2)
{
	//strcpy(s, s1);
	//strcat(s, s2);
	int i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	int j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}

}
int main() {
	char str[80] = { 0 };
	char str1[40] = { 0 };
	char str2[40] = { 0 };
	cout<<"ÇëÊäÈë×Ö·û´®1£º"<<endl;
	cin.getline(str1, 39);
	cout << "ÇëÊäÈë×Ö·û´®2£º" << endl;
	cin.getline(str2, 39);
	str_cat(str, str1, str2);
	int i = 0;
	for (i = 0; i < 80; i++)
		cout << str[i];
}