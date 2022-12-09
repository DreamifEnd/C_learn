#include<iostream>
using namespace std;
int max(int x, int y)
{
	return x + y;
}
float max(float x, float y)
{
	return x + y;
}
int main()
{
	int a = 0, b = 0;
	float x = 0, y = 0;
	cin >> a >> b;
	cout<<max(a,b)<<endl;
	cin >> x >> y;
	cout<<max(x,y)<<endl;
	return 0;
}