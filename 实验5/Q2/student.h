#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num1,const char* name1, char sex1)
	{
		num = num1;
		strncpy_s(name,name1,sizeof(name)-1);
		name[sizeof(name) - 1] = '\0';
		sex = sex1;
	}
private:
	int num;
	char name[20];
	char sex;
};
