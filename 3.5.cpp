#include <iostream>
using namespace std;
double aaa(int n)
{
	if (n == 10)
		return 1;
	else
		return (aaa(n + 1)+1) *2;
}
int main()
{
	double sum=aaa(1);
	cout << "猴子第一天摘的桃子:" << sum << endl;
}

