#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形边长：" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1)
	{
		cout << "这个三角形的面积是：" << _area(a, b, c)<<endl;
	}
	else
		cout << "这不是一个三角形"<<endl;
}
