#include"mytriangle.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "��������������:";
	cin >> a >> b >> c;
	cout << endl;
	if (is_valid(a, b, c))
	{
		double ��� = is_area(a, b, c);
		cout << "���������Ϊ:" << ��� << endl;
	}
	else
		cout << "���������Ϣ�д���" << endl;

	return 0;

}