#include<iostream>
using namespace std;
bool  is_prime(int num)
{
	int i = 2;
	bool a=1;
	while (i*i < num)
	{
		if (num % i != 0)
			a = 1;
		else
		{
			a = 0;
			break;
		}
		i++;
	}
	return a;
}
int main()
{
	int i = 2,j = 0;
	while (j <200)
	{
		if (is_prime(i) == 1)
		{
			cout << i << ' ';
			j++;
			if (j % 10 == 0)
				cout << endl;
		}
		
		i++;
	}
}