#include<iostream>
using namespace std;
int zong(int n)
{
	int sum;
	if (n == 2)
		return 2;
	else
	{
		sum = n + zong(n / 2);
	}
	return sum;
}
int main()
{
	int num=2, day=1;
	double w;
	while ((num*2)<= 100)
	{
		++day;
		num = num * 2;
	}
	
	w = (zong(num) * 0.8) / day;
	cout << "每天的平均花费为：" << w;
	return 0;
}