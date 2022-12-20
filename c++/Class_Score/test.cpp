#include<iostream>
#include<string.h>
using namespace std;
class Score {
	char No[5];
	char Name[8];
	int Math;
	int Phy;
	int Eng;
	int Ave;
public:
	void Write(char* n, char* na, int m, int p, int e);
	void Average();
	void Display();
};
void Score::Write(char* n, char* na, int m, int p, int e)
{
	strcpy(No, n);
	strcpy(Name, na);
	Math = m;
	Phy = p;
	Eng = e;
}
void Score::Average()
{
	Ave = (Math + Phy + Eng) / 3.0;
}
void Score::Display()
{
	cout << No << '\t' << Name << '\t' << Math << '\t' << Phy << '\t' << Eng << '\t' << Ave << endl;
}
int main()
{
	Score s[3];
	char n[5]; char na[8]; int m; int p; int e;
	cout << "输入学生及成绩: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> n >> na >> m >> p >> e;
		s[i].Write(n, na, m, p, e);
		s[i].Average();
	}
	cout << "No" << '\t' << "Name" << '\t' << "Math" << '\t' << "Phy" << '\t' << "Eng" << '\t' << "Ave" << endl;
	for (int i = 0; i < 3; i++)
	s[i].Display();
	return 0;
}

