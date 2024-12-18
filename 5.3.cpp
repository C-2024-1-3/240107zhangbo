#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length, width, height;
public:
	void setdata(double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
	}
	void printVolume()
	{
		cout << "volume:" << length * width * height << endl;
	}
};
int main()
{
	Cuboid c1, c2, c3;
	c1.setdata(5, 5, 5);
	c2.setdata(1.1, 2.2, 3.3);
	c3.setdata(3, 4, 6);
	c1.printVolume();
	c2.printVolume();
	c3.printVolume();
}