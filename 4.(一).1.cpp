#include <iostream>
using namespace std;
int main()
{
	cout << "依次输入10个数:";
	int arr[10];
	for (int i = 0; i <= 9; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "enter the name:";
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	int arr2[10];
	arr2[0] = arr[0];
	int b = 0;
	for (int i = 1; i <= 9; i++)
	{
		int temp = 1;
		for (int a = 0; a <= i - 1; a++)
		{
			if (arr[i] == arr[a])
			{
				temp=0;
			}
		}
		if (temp)
		{
			b++;
			arr2[b] = arr[i];
		}
	}
	cout << "the distinct names are:";
	for (int i = 0; i <= b; i++)
	{
		cout << arr2[i]<<" ";

	}
	cout << endl;
}

