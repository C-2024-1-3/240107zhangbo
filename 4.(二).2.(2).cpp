#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int size = strlen(hexString);
	int sum=0;
	for (int i = 0; i <= size - 1; i++)
	{

		int temp;
		if (char(hexString[i]) >= 65 && char(hexString[i]) <= 70)
		{
			temp = char(hexString[i]) - 55;
		}
		else if (char(hexString[i]) >= 97 && char(hexString[i]) <= 102)
		{
			temp = char(hexString[i]) - 87;
		}
		else
		{
			temp = char(hexString[i]) - 48;
		}
		for (int n = 1; n <= size - i - 1; n++)
		{
			temp *= 16;
		}
		sum += temp;
	}
	return sum;
}
int main()
{
	cout << parseHex("A5") << endl;
}
