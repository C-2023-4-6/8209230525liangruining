#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int c;//a��b�ȴ�Сʱ���м�����
	cin >> a >> b;
	int x, y;//x��ʾ��������λ�ã�y��ʾ������λ��
	int max, min;//max��ʾ���Լ����min��ʾ��С��������
	if (a <= b)
	{
		c = a;
		a = b;
		b = c;
	}//ʼ����a�ǽϴ���
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
	cout << "���Լ��Ϊ��" << max<<endl;
	cout << "��С������Ϊ��" << min<<endl;
	return 0;
}