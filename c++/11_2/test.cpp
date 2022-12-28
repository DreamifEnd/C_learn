#include<iostream>
#include<string>
using namespace std;
class Score
{
	friend void Average(Score&);
	int No;
	string Name;
	int phScore;
	int maScore;
	int enScore;
	double aveScore;
public:
	Score(int no,string na,int ph,int ma, int en)
	{
		No = no;
		Name = na;
		phScore = ph;
		maScore = ma;
		enScore = en;		
	}
	void print()
	{
		cout<<"No = "<<No<<endl;
		cout<<"Name = "<<Name<<endl;
		cout<<"phScore = "<<phScore<<endl;
		cout<<"maScore = "<<maScore<<endl;
		cout<<"enScore = "<<enScore<<endl;
		cout<<"aveScore = "<<aveScore<<endl;
	}
};
void Average(Score &s)
{
	s.aveScore = (s.phScore+s.maScore+s.enScore)/3.0;
}
int main()
{
	Score s1(1001,"zhang",80,70,90);
	Average(s1);
	s1.print();
	return 0;
}
