#include<iostream>
using namespace std;
int main()
{
	int a[11];
	int b;
	bool single=1;
	int i = 2,num=1;
	cin >> a[1];
	while (i <= 10)
	{
		int j = 1;
		cin >> b;
		while (j <= i)
		{
			if (b == a[j])
			{
				single = 0;
				break;
			}
			else
				single = 1;
			j++;
		}
		if (single == 1)
		{
			num++;
			a[num] = b;
		}
		i++;
	}
	i = 1;
	while (i <= num)
	{
		cout << a[i] << ' ';
		i++;
	}
}