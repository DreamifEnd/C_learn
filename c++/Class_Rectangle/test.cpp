#include<iostream>
#include<cmath>
using namespace std;
class Rectangle {
	double Left,Top;
	double Right,Bottom;
public:
	double Diagonal();
	void show(Rectangle* p);
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
void Rectangle::show(Rectangle* p)
{
	
	cout << '(' << Left << ',' << Top << ')' << endl;

	cout << '(' << Right << ',' << Bottom << ')' << endl;
	cout << p->Diagonal() << endl;
}

int main()
{
	Rectangle *p = new Rectangle (10,10,20,20);
	p->show(p);
	delete(p);
	return 0;
}

