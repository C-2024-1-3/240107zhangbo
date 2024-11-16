#include<iostream>
using namespace std;
int main()
{
	cout << "输入三角形的三边长：";
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b &&( b + c) > a)
	{
		cout << "周长为：" <<a+b+c<< endl;
		if (a == b || a == c || b == c)
			cout << "等腰三角形" << endl;
	}
	return 0;
}
