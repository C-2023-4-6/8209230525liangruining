#include<iostream>
using namespace std;
class Cub
{
	private:
		double length;
		double width;
		double height;
	public:
		void setvalue()//ÊäÈë³¤¿í¸ß
		{
			cin >> length >> width >> height;
		}
		void showvol()
		{
			double v;
			v = length * width * height;
			cout << v << endl;
		}
};
int main()
{
	Cub first;
	Cub second;
	Cub third;
	first.setvalue();
	second.setvalue();
	third.setvalue();
	first.showvol();
	second.showvol();
	third.showvol();
}