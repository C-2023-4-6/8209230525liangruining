#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int grade;
		void setvalue()//设置每个学生的姓名和成绩
		{
			cin >> name >> grade;
		}
};
void max(student* s, int size)//找最大成绩
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
	cout << "成绩最高的学生是：" << m_name << endl;
}
int main()
{
	student s[5];//设置对象数组	
	for (int i = 0; i < 5; i++)
		s[i].setvalue();
	max(s,5);
}