#include<iostream>
using namespace std;
int max(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return max(b, a % b);
}
int min(int a, int b)
{
	int c;
	c = a * b / max(a, b);
	return c;
}
int main()
{
	int x, y, z;
	cin >> x >> y;
	if (x < y)
	{
		z = y;
		y = x;
		x = z;
	}
	cout << x << "&" << y << "���Լ��Ϊ��" << max(x, y)<<endl;
	cout << x << "&" << y << "��С������Ϊ��" << min(x, y)<<endl;
	return 0;
}