#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c;
	cout << "�����������α߳���" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1)
	{
		cout << "��������ε�����ǣ�" << _area(a, b, c)<<endl;
	}
	else
		cout << "�ⲻ��һ��������"<<endl;
}
