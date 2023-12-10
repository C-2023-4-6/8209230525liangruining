#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	return side1 + side2 > side3 && max(side1, side2) - min(side1, side2) < side3;
}
double _area(double side1, double side2, double side3)
{
	double s;
	s = (side1 + side2 + side3) / 2;
	return sqrt(s*(s - side1)*(s - side2)*(s - side3));
}