#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char op;
	cout << "请输入第一个数：";
	cin >> a;
	cout << "请输入运算符：";
	cin >> op;
	cout << "请输入第二个数：";
	cin >> b;
	cout << "结果为：";
	if (op == '+')
		cout << a + b << endl;
	else if (op == '-')
		cout << a - b << endl;
	else if (op == '*')
		cout << a * b << endl;
	else if (op == '%')
	{
		if ((int)a == a && (int)b == b)
			cout << int(a) % int(b) << endl;
		else
			cout << "错误" << endl;
	}
	else if (op == '/')
	{
		if (b != 0)
			cout << a / b << endl;
		else
			cout << "除数不能为0" << endl;
	}
	else
		cout << "运算符非法" << endl;


	return 0;

}