#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "输入两个正整数:";
	cin >> a >> b;
	int c=min(a,b);
	for (; c >= 1; c--)
	{
		if (a % c == 0 && b % c == 0)
			break;
	}
	cout << "最大公约数:" << c << endl;
	cout << "最小公倍数:" << a*b/c << endl;

	return 0;
}
