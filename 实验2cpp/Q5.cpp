#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;//储存各个符号出现的次数
	char x;
	while ((x = getchar()) != '\n')//getchar依次输入字符包括回车 
	{
		if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
			a++;
		else if (x == ' ')
			b++;
		else if (x >= '1' && x <= '9')
			c++;
		else 
			d++;
	}
	cout<<"英文字母的个数为："<< a;
	cout<<"空格的个数为:"<< b;
	cout<<"数字的个数为："<< c;
	cout<<"其他字符的个数为："<< d;
}
