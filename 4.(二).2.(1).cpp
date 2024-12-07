#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
    int size1 = strlen(s1), size2 = strlen(s2);
    for (int i = 0; i <= size2-1; i++)
    {
        if (size2 - i - 1 < size1)
            return -1;
        if (s1[0] == s2[i])
        {
            for (int n = 0; n <= size1-1; n++)
            {
                if (n == size1-1)
                {
                    if (s1[n] == s2[i + n])
                        return i + 1;
                }
                else
                {
                    if (s1[n] == s2[i + n])
                        continue;
                    else
                        break;
                }
            }
        }
    }
    return -1;
}
int main()
{
    char s1[999], s2[999];
    cout << "enter the s1:";
    cin.getline(s1, 999);
    cout << "enter the s2:";
    cin.getline(s2, 999);
    int a = indexof(s1, s2);
    if (a == -1)
    {
        cout << "s1不是s2的子串" << endl;
    }
    else
    {
        cout << "s1在s2中的下标为:" << a << endl;
    }
}