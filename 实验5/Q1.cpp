#include<iostream>
using namespace std;
class Time             // 定义Time类
{
	private:              // 数据成员为私有的
		int hour;
		int minute;
		int sec;
	public:
		void settime()//输入时间
		{
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}
		void showtime()//输出时间
		{
			cout << hour << ":" << minute << ":" << sec << endl;
		}
};
int main()
{
	Time t1;          //定义t1为Time类对象
	t1.settime();
	t1.showtime();
	return 0;
}