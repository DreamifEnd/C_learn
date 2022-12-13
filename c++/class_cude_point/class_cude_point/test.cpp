#include<iostream>
#include<cmath>
using namespace std;
class Cude {
private:
	Point m_c;
	double m_r;
public:
	//设置圆心坐标
	void inputc(double c[2])
	{
		int i = 0;
		for (i = 0; i < 2; i++)
			m_c[i] = c[i];
	}
	//设置圆半径
	void inputr(double r)
	{
		m_r = r;
	}
	//获取圆心坐标
	double* getc()
	{
		return m_c;
	}
	//获取圆半径
	double getr()
	{
		return m_r;
	}
};
class Point {
private:
	double m_c[2];
public:
	//设置点坐标
	void inputc(double c[2])
	{
		int i = 0;
		for (i = 0; i < 2; i++)
			m_c[i] = c[i];
	}
	//获取点坐标
	double* getc()
	{
		return m_c;
	}
};
int charge(Cude c, Point p)
{

}
int main()
{
	double r = 0;
	double c[2] = {0};
	Cude C;
	Point P;
	cout << "输入圆心坐标: \n";
	cin >> c[0] >> c[1];
	cout << "输入圆半径:  \n";
	cin >> r;
	C.inputc(c);
	C.inputr(r);
	cout << "输入点坐标:  \n";
	cin >> c[0] >> c[1];
	P.inputc(c);
	int j = charge(C,P);
	return 0;
}