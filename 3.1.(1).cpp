#include <iostream>
using namespace std;
int abc(int* p, int* q)
{
	int c;
	c = *p > *q ? *q : *p;
	for (; c >= 1; c--)
	{
		if (*p % c == 0 && *q % c == 0)
		{
			return c;
			break;
		}
		
	}
}
int main()
{
	int m, n;
	cout << "分别输入自然数m和n:";
	cin >> m >> n;
	int c = abc(&m, &n);
	cout << "它们的最大公约数为:" << c << endl;


	return 0;
}
