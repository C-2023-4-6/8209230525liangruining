#include<iostream>
using namespace std;
class Time             // ����Time��
{
	private:              // ���ݳ�ԱΪ˽�е�
		int hour;
		int minute;
		int sec;
	public:
		void settime()//����ʱ��
		{
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}
		void showtime()//���ʱ��
		{
			cout << hour << ":" << minute << ":" << sec << endl;
		}
};
int main()
{
	Time t1;          //����t1ΪTime�����
	t1.settime();
	t1.showtime();
	return 0;
}