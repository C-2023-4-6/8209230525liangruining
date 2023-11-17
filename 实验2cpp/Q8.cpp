#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	cin >> a;
	if (a < 0)
		cout << "负数没有平方根！";
	else
	{
		double x, y, z;
		x = a;
		y = 0.5 * (x + a / x);
		z = x;
		x = y;
		while (fabs(y - z)>= 1e-5)
		{
			y = 0.5 * (x + a / x);
			z = x;
			x = y;
		}
		cout << "平方根为：" << y;
	}
	return 0;
}