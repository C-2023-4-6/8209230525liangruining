#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;//����������ų��ֵĴ���
	char x;
	while ((x = getchar()) != '\n')//getchar���������ַ������س� 
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
	cout<<"Ӣ����ĸ�ĸ���Ϊ��"<< a;
	cout<<"�ո�ĸ���Ϊ:"<< b;
	cout<<"���ֵĸ���Ϊ��"<< c;
	cout<<"�����ַ��ĸ���Ϊ��"<< d;
}
