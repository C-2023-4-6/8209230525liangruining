#include<iostream>
using namespace std;
int peach(int day, int num)
{
	if (day==10)
		return num;
	else
		return peach(day+1, (num + 1) * 2);
}
int main()
{
	cout <<"第一天摘的桃子数为：" << peach(1, 1) << endl;
}