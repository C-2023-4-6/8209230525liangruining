#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << a + b + c;
		if (a == b || a == c || b ==c)
		{
			cout << "这是一个等腰三角形";
		}
	}
	else
		cout << "这不是一个三角形";
	return 0;
}