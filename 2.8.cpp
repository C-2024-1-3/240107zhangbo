#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	cout << "输入a:";
	cin >> a;
	double x1=10, x2=9;
	if (a > 0)
	{
		do
		{
			x1 = x2;
			x2 = (x1 + a / x1) /2;
		} while (fabs(x1 - x2) >= 1e-5);//如果将精度变为10^-10，则将循环条件变为fabs(x1-x2)>=1e-10,输出时为setprecision(11)
		cout << "它的平方根为:" <<fixed<<setprecision(6)<< x2 << endl;
	}
	else if (a == 0)
		cout << "它的平方根为:" << 0 << endl;
	else
		cout << "您输入的数据有问题" << endl;

	return 0;
}
