#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	cin >> a;
	if (a < 0)
		cout << "����û��ƽ������";
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
		cout << "ƽ����Ϊ��" << y;
	}
	return 0;
}