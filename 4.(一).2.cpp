#include<iostream>
using namespace std;
void swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	double arr[10];
	cout << "enter the numbers:";
	for (int i = 0; i <= 9; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 9; i >= 1; i--)
	{
		for (int a = 0; a < i; a++)
		{
			if (arr[a] > arr[a + 1])
				swap(&arr[a], &arr[a + 1]);
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;

}