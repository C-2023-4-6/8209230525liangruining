#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a[11];
	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	for (int i = 1; i <=10 ; i++)
	{
		for (int j= 1; j <= 10 - i;j++) 
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
	for (int i = 1; i <= 10; i++)
		cout<< a[i]<<' ';
}