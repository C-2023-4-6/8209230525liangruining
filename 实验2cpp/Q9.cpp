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
	cout << "ÿ���ƽ������Ϊ��" << w;
	return 0;
}