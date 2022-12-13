#include<iostream>
using namespace std;
class Student {
private:
	string Name;
	int Number;
public:
	Student()
	{
		cout << "³õÊ¼»¯";
	}
	void getname(string name)
	{
		Name = name;
	}
	string pushname()
	{
		return Name;
	}
	void getnumber(int number)
	{
		Number = number;
	}
	int pushnumber()
	{
		return Number;
	}
};
int main()
{
	Student stu1;
	string name;
	int number = 0;
	cin >> name >> number;
	stu1.getname(name);
	stu1.getnumber(number);
	return 0;
}