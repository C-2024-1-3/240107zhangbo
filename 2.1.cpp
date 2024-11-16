#include<iostream>
using namespace std;
#include<string>

int main()
{
	char a;
	cin >> a;
	if (a >= 'A' && a <= 'Z')
		cout << a + 1 << endl;
	else
		cout << char(a - 32) << endl;

	system("pause");
	return 0;
}
