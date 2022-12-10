#include<iostream>
#include<string>
using namespace std;
class student {
private:
	string Name;
	int Number;
public:
	void input(string name, int number)
	{
		Name = name;
		Number = number;
	}
	void output(string name,int number)
	{
		name = Name;
		number = Number;
	}


};
int main()
{
	string name;
	int number = 0;
	cin >> name >> number;
	student s1;
	s1.input(name, number);
	s1.output(name, number);
	cout << name <<'\t' << number << endl;
	return 0;
}