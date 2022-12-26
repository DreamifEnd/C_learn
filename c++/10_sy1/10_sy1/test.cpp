#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Archives
{
	char No[5];
	char Name[8];
	char Sex;
	int Age;
public:
	Archives(const char no[], const char name[],char s,int a)
	{
		strcpy(No, no);
		strcpy(Name, name);
		Sex = s;
		Age = a;
	}
	void Show()
	{
		cout << "No = " << No << " Name = " << Name << " Sex = " << Sex << " Age = " << Age << endl;
	}
};
class Laborage : public Archives
{
	int Ssalary;
	int Security;
	int Fsalary;
public:
	Laborage(const char no[], const char name[], char s, int a,int ss,int se):Archives(no,name,s,a)
	{
		Ssalary = ss;
		Security = se;
	}
	void Count()
	{
		Fsalary = Ssalary - Security;
	}
	void Display()
	{
		Show();
		Count();
		cout << "Ssalary = " << Ssalary << " Security = " << Security << " Fsalaty = " << Fsalary << endl;
	}
};
int main()
{
	Laborage lab("1001","Cheng",'M',21,2000,100);
	lab.Display();
	return 0;
}