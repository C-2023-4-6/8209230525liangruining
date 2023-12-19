#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
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
