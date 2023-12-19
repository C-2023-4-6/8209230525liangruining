#include<iostream>
using namespace std;
class Point
{
	private:
		int x;
		int y;
		
	public:
		Point()
		{
			x = 60;
			y = 80;
		}
		~Point()
		{}
		void setPoint(int i, int j)
		{
			x = x + i;
			y = y + j;
		}
		void display()
		{
			cout << '(' << x << ',' << y << ')' << endl;
		}
};
int main()
{
	Point first;
	first.setPoint(4, 8);
	first.display();
}
