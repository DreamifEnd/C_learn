#include<iostream>
using namespace std;
class Cube {
private:
	int m_l;
	int m_w;
	int m_h;
	int m_S;
	int m_V;
public:
	void input(int l, int w, int h)
	{
		m_l = l;
		m_w = w;
		m_h = h;
	}
	int outputS(int s)
	{
		s = m_S;
		return s;
	}
	int outputV(int v)
	{
		v = m_V;
		return v;
	}
	void calS(int l, int w, int h)
	{
		m_S = (l + w + h) * 2;
	}
	void calV(int l, int w, int h)
	{
		m_V = l * w * h;
	}
};
int charge(int s1, int s2, int v1, int v2)
{
	if (s1 == s2 && v1 == v2)
		return 1;
	else
		return 0;
}
int main()
{
	int s1 = 0, s2 = 0, v1 = 0, v2 = 0;
	int a, b, c;
	Cube c1;
	Cube c2;
	cin >> a >> b >> c;
	c1.input(a , b , c);
	c1.calS(a,b,c);
	c1.calV(a,b,c);
	s1 = c1.outputS(s1);
	v1 = c1.outputV(v1);

	cin >> a >> b >> c;
	c2.input(a, b, c);
	c2.calS(a, b, c);
	c2.calV(a, b, c);
	s2 = c2.outputS(s2);
	v2 = c2.outputV(v2);

	
	if (charge(s1, s2, v1, v2)==1)
		cout << "两立方体相等";
	else
		cout << "两立方体不等";
	return 0;
}