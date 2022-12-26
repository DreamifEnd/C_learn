#include<iostream>
using namespace std;
class Preson
{
protected:
	string Name;
	char Sex;
	string Dayout;
public:
	/*Preson(string n, char s, string d)
	{
		Name = n;
		Sex = s;
		Dayout = d;
	}*/
	/*virtual void getInformation(string n, char s, string d)
	{
		Name = n;
		Sex = s;
		Dayout = d;
	}*/
	//virtual void getInformation() = 0;
	/*virtual void outInformation()
	{
		cout << "Name = " << Name << endl;
		cout << "Sex = " << Sex << endl;
		cout << "Dayout = " << Dayout << endl;
	}*/
	//virtual void outInformation() = 0;
};
class Student:public Preson
{
	int Class;
	int No;
	string Major;
	int EnglishScore;
	int MathScore;
public:
	/*Student(string n, char s, string d, int c, int no, string m, int en, int ma) :Preson(n, s, d)
	{
		Class = c;
		No = no;
		Major = m;
		EnglishScore = en;
		MathScore = ma;
	}*/
	void getInformation(string n, char s, string d, int c, int no, string m, int en, int ma)
	{
		Name = n;
		Sex = s;
		Dayout = d;
		Class = c;
		No = no;
		Major = m;
		EnglishScore = en;
		MathScore = ma;
	}
	void outInformation()
	{
		cout << "Name = " << Preson::Name << endl;
		cout << "Sex = " << Preson::Sex << endl;
		cout << "Dayout = " << Preson::Dayout << endl;
		cout << "Class = " << Class << endl;
		cout << "No = " << No << endl;
		cout << "Major = " << Major << endl;
		cout << "EnglishScore = " << EnglishScore << endl;
		cout << "MathScore = " << MathScore << endl;

	}
};
class Employee:public Preson
{
	string Department;
	string Post;
	int Salary;
public:
	/*Employee(string n, char s, string d, string de, string po, int sa) :Preson(n, s, d)
	{
		Department = de;
		Post = po;
		Salary = sa;
	}*/
	void getInformation(string n, char s, string d, string de, string po, int sa)
	{
		Name = n;
		Sex = s;
		Dayout = d;
		Department = de;
		Post = po;
		Salary = sa;
	}
	void outInformation()
	{
		cout << "Name = " << Preson::Name << endl;
		cout << "Sex = " << Preson::Sex << endl;
		cout << "Dayout = " << Preson::Dayout << endl;
		cout << "Department = " << Department << endl;
		cout << "Post = " << Post << endl;
		cout << "Salary = " << Salary << endl;
	}

};
int main()
{
	string Name;
	char Sex;
	string Dayout;
	int Class;
	int No;
	string Major;
	int EnglishScore;
	int MathScore;
	string Department;
	string Post;
	int Salary;

	Student s1;
	cin >> Name >> Sex >> Dayout >> Class >> No >> Major >> EnglishScore >> MathScore;
	s1.getInformation(Name,Sex,Dayout,Class,No,Major,EnglishScore,MathScore);
	s1.outInformation();
	Employee e1;
	cin >> Name >> Sex >> Dayout >> Department >> Post >> Salary;
	e1.getInformation(Name, Sex, Dayout, Department, Post, Salary);
	e1.outInformation();
	return 0;
}