#include<iostream>
#include<cmath>
using namespace std;
class Cude {
private:
	Point m_c;
	double m_r;
public:
	//����Բ������
	void inputc(double c[2])
	{
		int i = 0;
		for (i = 0; i < 2; i++)
			m_c[i] = c[i];
	}
	//����Բ�뾶
	void inputr(double r)
	{
		m_r = r;
	}
	//��ȡԲ������
	double* getc()
	{
		return m_c;
	}
	//��ȡԲ�뾶
	double getr()
	{
		return m_r;
	}
};
class Point {
private:
	double m_c[2];
public:
	//���õ�����
	void inputc(double c[2])
	{
		int i = 0;
		for (i = 0; i < 2; i++)
			m_c[i] = c[i];
	}
	//��ȡ������
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
	cout << "����Բ������: \n";
	cin >> c[0] >> c[1];
	cout << "����Բ�뾶:  \n";
	cin >> r;
	C.inputc(c);
	C.inputr(r);
	cout << "���������:  \n";
	cin >> c[0] >> c[1];
	P.inputc(c);
	int j = charge(C,P);
	return 0;
}