#include<iostream>
using namespace std;
int main()
{
	int k = rand() % 100 + 1, i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}