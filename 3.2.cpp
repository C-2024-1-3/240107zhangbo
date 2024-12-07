#include <iostream>
using namespace std;

bool is_prime(int num)
{
	if (num <= 3)
		return 1;
	for (int i = 1; i < num-1;)
	{
		i++;
		if (num % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main()
{
	int num = 2;
	for (int i = 1; i<= 10; i++)
	{
		for (int a = 1;a<=10; )
		{
			if (is_prime(num))
			{
				cout << num << " ";
				a++;
			}
			num++;
		}
		cout << endl;
	}

	return 0;
}