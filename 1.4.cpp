#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 0xfffe;
	cout << "output in oct unsigned int type:" << oct<<testUnint << endl;
	double a = 9.9;
	cout << "output in int type:" <<dec<< static_cast<int>(a) << endl;

	system("pause");
	return 0;

}

