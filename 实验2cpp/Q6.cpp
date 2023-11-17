#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int c;//a与b比大小时的中间容器
	cin >> a >> b;
	int x, y;//x表示被除数的位置，y表示除数的位置
	int max, min;//max表示最大公约数，min表示最小公倍数；
	if (a <= b)
	{
		c = a;
		a = b;
		b = c;
	}//始终让a是较大数
	x = a;
	y = b;
	while ((x % y )!= 0)
	{
		int z = 0;
		z = y;
		y = x % y;
		x = z;
	}
	max = y;
	min = (a * b) / max;
	cout << "最大公约数为：" << max<<endl;
	cout << "最小公倍数为：" << min<<endl;
	return 0;
}