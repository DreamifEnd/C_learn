#include<iostream>
using namespace std;
class Rectangle
{
	float Length, Width;
public:
	Rectangle(float length, float width)
	{
		Length = length; Width = width;
	}
	float GetLength() { return Length; }
	float GetWidth() { return Width; }
	float Area()
	{
		return Length * Width;
	}
};
class Cuboid : public Rectangle
{
	float High, Volume;
public:
	Cuboid(float length, float width, float high) :Rectangle(length, width)
	{
		High = high;
	}
	float Vol()
	{
		Volume = High * Area();
		return Volume;
	}
	void Show()
	{
		cout << "Length=" << GetLength() << '\t' << "Width=" << GetWidth() << '\t' << "High=" << High << '\t' << "Volume=" << Volume << endl;
	}
};
int main()
{
	Cuboid cub(10, 20, 30);
	cub.Vol();
	cub.Show();
	return 0;
}