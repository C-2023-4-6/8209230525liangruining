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
			cout << "����һ������������";
		}
	}
	else
		cout << "�ⲻ��һ��������";
	return 0;
}