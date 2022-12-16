#include<iostream>
#include<cmath>
using namespace std;
class Rectangle {
	double Left,Top;
	double Right,Bottom;
public:
	double Diagonal();
	void show();
	Rectangle(double l, double t, double r, double b);
};
Rectangle::Rectangle(double l, double t, double r, double b)
{
	Left = l;
	Top = t;
	Right = r;
	Bottom = b;
}
double Rectangle::Diagonal()
{
	
	return sqrt(pow(Left - Right, 2) + pow(Top - Bottom, 2));
}
void Rectangle::show()
{
	
	cout << '(' << Left << ',' << Top << ')' << endl;

	cout << '(' << Right << ',' << Bottom << ')' << endl;
}

int main()
{
	Rectangle c(10,10,20,20);
	c.show();
	cout << c.Diagonal();
	return 0;
}
