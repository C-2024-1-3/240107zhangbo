#include<iostream>
using namespace std;
int main()
{
	double a = 2;
	double sum = 0;
	double i = 1;
	for (; a <= 100; a = a * 2)
	{
		sum = sum + a * 0.8;
		i++;
	}
	cout << sum / i << endl;

	return 0;
}