#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 60;
		y = 80;
		cout<<"初始坐标:" << "(" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "最终坐标:"<<"(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p1;
	p1.setPoint(5, 5);
	p1.display();
}