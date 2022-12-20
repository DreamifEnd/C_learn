#include<iostream>
using namespace std;
class Complex{
	int Real;
	int Image;
public:
Complex(int r,int i);
Complex(Complex &c);
void Dispaly();
};
Complex::Complex(int r = 0,int i = 0)
{
	Real = r;
	Image = i;
}
Complex::Complex(Complex &c)
{
	Real = c.Real;
	Image = c.Image;
}
void Complex::Dispaly()
{
	cout<<Real<<'+'<<Image<<'i'<<endl;
}
int main()
{
	Complex c1(20,40),c2;
	Complex c3(c1);
	c1.Dispaly();
	c2.Dispaly();
	c3.Dispaly();
	return 0;
}
