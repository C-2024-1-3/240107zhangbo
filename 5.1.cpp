#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h, int m, int s)
	{
		if (h >= 0 && h < 24)
		{
			hour = h;
		}
		if (m >= 0 && m < 60)
		{
			minute = m;
		}
		if (s >= 0 && s < 60)
		{
			sec = s;
		}
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;   
	t1.setTime(8, 30, 30);
	t1.showTime();
	return 0;
}