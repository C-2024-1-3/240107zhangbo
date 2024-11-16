#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float f, c;
	cout << "输入华氏温度：";
	cin >> f;
	c = (f - 32) / 1.8;
	cout << "输出摄氏温度:"<<fixed<<setprecision(2)<<c<<endl;
	
	return 0;
}
