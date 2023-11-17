#include<iostream>
using namespace std;
const double pai = 3.14;
int main()
{
	double r,h, v;
	cin >> r >> h;
	v = pai * r * r * h/3;
	cout << v;
	return 0;
}