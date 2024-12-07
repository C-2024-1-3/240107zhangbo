#include <iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int size1, size2;
	size1 = strlen(s1);
	size2 = strlen(s2);
	for (int i = 0;i<=size2-1 ; i++)
	{
		if (s1[0] == s2[i])
		{
			for (int n = 0;n<=size1-1; n++)
			{
				if (n ==size1-1)
				{
					if (s1[n] == s2[i + n])
						return i+1;
				}
				if (s1[n] != s2[i + n])
				{
					break;
				}
			}
		}
	}
	return -1;
}
int main()
{
	char s1[999];
	char s2[999];
	cout << "enter the first string:";
	cin.getline(s1, 999);
	cout << "enter the second string:";
	cin.getline(s2, 999);
	int a=indexOf(s1, s2);
	if (a == -1)
	{
		cout << "s1不是s2的子串" << endl;
	}
	else
		cout << "s1在s2中的下标为" << a << endl;
   
}

