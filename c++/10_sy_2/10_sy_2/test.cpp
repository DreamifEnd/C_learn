#include<iostream>
using namespace std;
class Rectangle
{
protected:
	int Length;
	int Width;
public:
	Rectangle(int l, int w)
	{
		Length = l;
		Width = w;
	}
	int Area()
	{
		return Length * Width;
	}
};
class High:public Rectangle
{
protected:
	int H;
public:
	High(int l ,int w ,int h):Rectangle(l,w)
	{
		H = h;
	}
	
};
class Cuboid:public High
{
	int Volume;
public:
	Cuboid(int l, int w, int h) :High(l, w, h)
	{
		;
	}
	void Vol()
	{
		Volume =  H * Rectangle::Area();
	}
	void show()
	{
		Vol();
		cout << "长为: " << Rectangle::Length << endl;
		cout << "宽为: " << Rectangle::Width << endl;
		cout << "高为: " << High::H << endl;
		cout << "体积为: " << Volume << endl;
	}
};
int main()
{
	Cuboid cub(10, 20, 30);
	cub.show();
	return 0;
}