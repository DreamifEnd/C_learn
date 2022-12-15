#include<iostream>
using namespace std;
class Complex {
	int Real;
	int Image;
public:
	void Dispaly();
	Complex();
	Complex(int r,int i);
	//Complex(Complex &c);
};
void Complex::Dispaly()
{
	cout << Real << '+' << Image << 'i';
}
Complex::Complex()
{
	Real = 0;
	Image = 0;
}
Complex::Complex(int r, int i)
{
	Real = r;
	Image = i;
}
//Complex::Complex(Complex& c)
//{
//	Real = c.Real;
//	Image = c.Image;
//}
int main()
{
	Complex c1(10,20), c2;
	//Complex c1(c2);
	c2 = c1;
	c1.Dispaly();
	cout << endl;
	c2.Dispaly();
	return 0;
}