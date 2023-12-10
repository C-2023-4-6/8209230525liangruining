#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int len = strlen(hexString);
	int sum = 0;
	int time = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (isdigit(hexString[i]))
			sum = sum + (hexString[i] - '0') * pow(16, time);
		else
			sum = sum + (hexString[i] - 'A' + 10) * pow(16, time);
		time++;
	}
	return sum;
}
int main()
{
	char s[100];
	cin >> s;
	char* p = s;
	cout << parseHex(p);
}