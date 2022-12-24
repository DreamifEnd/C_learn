#include<iostream>
#include<string>
using namespace std;
class Archives
{
protected:
	string No;
	string Name;
	char Sex;
	int Age;
public:
	Archives(string no , string na , char s , int a )
	{
		No = no;
		Name = na;
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
	Laborage(string no, string na, char s, int a ,int ss , int se , int fs):Archives(no,na,s,a)
	{
		Ssalary = ss;
		Security = se;
		Fsalary = fs;
	}
	void showMoney()
	{
		cout << "Ssalary = " << Ssalary << " Security = " << Security << " Fsalary = " << Fsalary << endl;
	}
};
int main()
{
	Laborage lab("101", "ÕÅÈý", 'M', 18, 8000, 2000, 6000);
	lab.show();
	lab.showMoney();
	return 0;
}
