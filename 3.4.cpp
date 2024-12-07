#include"mytriangle.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "输入三角形三边:";
	cin >> a >> b >> c;
	cout << endl;
	if (is_valid(a, b, c))
	{
		double 面积 = is_area(a, b, c);
		cout << "三角形面积为:" << 面积 << endl;
	}
	else
		cout << "您输入的信息有错误" << endl;

	return 0;

}