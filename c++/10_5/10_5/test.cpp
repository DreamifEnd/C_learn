#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Archives
{
protected:
	char No[5];
	char Name[8];
	char Sex;
	int Age;
public:
	Archives(const char no[], const char na[], char s, int a)
	{
		strcpy(No, no);
		strcpy(Name, na);
		Sex = s;
		Age = a;
	}
	void show()
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
	Laborage(const char no[], const char na[], char s, int a, int ss, int se, int fs) :Archives(no, na, s, a)
	{
		Ssalary = ss;
		Security = se;
		Fsalary = fs;
	}
	void showMoney()
	{
		cout << "Ssalary = " << Ssalary << " Security = " << Security << " Fsalary = " << Fsalary << endl;
		//cout << "No = " << Archives::No << " Name = " << Archives::Name << " Sex = " << Archives::Sex << " Age = " << Archives::Age << endl;
	}
};
int main()
{
	Laborage lab("101", "ÕÅÈý", 'M', 18, 8000, 2000, 6000);
	lab.show();
	lab.showMoney();
	return 0;
}
