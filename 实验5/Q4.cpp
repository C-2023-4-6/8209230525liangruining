#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int grade;
		void setvalue()//����ÿ��ѧ���������ͳɼ�
		{
			cin >> name >> grade;
		}
};
void max(student* s, int size)//�����ɼ�
{
	int m_grade = s[0].grade;
	string m_name = s[0].name;
	for (int i = 1; i < 5; i++)
	{
		if (m_grade < s[i].grade)
		{
			m_grade = s[i].grade;
			m_name = s[i].name;
		}
			
	}
	cout << "�ɼ���ߵ�ѧ���ǣ�" << m_name << endl;
}
int main()
{
	student s[5];//���ö�������	
	for (int i = 0; i < 5; i++)
		s[i].setvalue();
	max(s,5);
}