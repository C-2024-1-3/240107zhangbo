#include <iostream>
using namespace std;
void change(bool* p)
{
	if (*p == 1)
		*p = 0;
	else
		*p = 1;
}
int main()
{
	bool arr[100];
	for (int i = 0; i <= 99; i++)
	{
		arr[i] = 0;
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int n = i; n <= 100; n += i)
		{
			change(&arr[n - 1]);
		}

	}
	cout << "柜子的状态:" << endl;
	for (int i = 0; i <= 99; i++)
	{
		cout << "L" << i + 1 << ":" << arr[i] << endl;
	}

}

