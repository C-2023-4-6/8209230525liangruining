#include<iostream>
using namespace std;
int main()
{
	char word;
	cin >> word;
	if (word >= 'a' && word <= 'z')
	{
		cout << (char)(word - 32);
	}
	else
		cout << word+1;
	return 0;
}