#include<iostream>
using namespace std;
class Preson {
public:
	int m_age;
	int* m_height;

	Preson(int age,int height)
	{
		m_age = age;
		m_height = new int(height);
	}
	Preson(const Preson &p)
	{
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}
	~Preson()
	{
		if(m_height!=NULL)
		{
			delete(m_height);
			m_height = NULL;
		}
		
	}
};
int main()
{
	Preson p1(18,160);
	Preson p2(p1);
	cout<<p1.m_age<<'\t'<<*p1.m_height<<endl;
	cout<<p2.m_age<<'\t'<<*p2.m_height<<endl;
	return 0;
}
