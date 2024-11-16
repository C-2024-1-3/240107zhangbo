#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s;
	cout << "请输入一串字符串:";
	getline(cin, s);
	int length = s.size();
	int space = 0, letters = 0, numbers = 0, others = 0;
	for (int i = 0; i < length; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			numbers++;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z')||(s[i]>='A'&&s[i]<='Z'))
		{
			letters++;
		}
		else if (s[i]==' ')
		{
			space++;
		}
		else
		{
			others++;
		}
		
	}
	cout << "数字个数:" << numbers << endl;
	cout << "字母个数:" << letters << endl;
	cout << "空格个数:" << space << endl;
	cout << "其他个数:" << others << endl;

	return 0;
}