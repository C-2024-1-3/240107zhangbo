#include <iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	int size = strlen(s);
	for (int i = 0; i <= size; i++)
	{
		int temp = char(s[i]);
		if (temp >= 97 && temp <= 122)
		{
			counts[temp - 97]++;
		}
		if (temp >= 65 && temp <= 90)
		{
			counts[temp - 65]++;
		}
	}
	for (int i = 0; i <= 25; i++)
	{
		if (counts[i] != 0)
		{
			cout << char(i + 97) << ":" << counts[i] << "times" << endl;
		}
	}
}
int main()
{ 
	char s[999];
	cout << "enter a string:";
	cin.getline(s, 999);
	int counts[26];
	for (int i = 0; i <= 25; i++)
	{
		counts[i] = 0;
	}
	count(s, counts);

}

