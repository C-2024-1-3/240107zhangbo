#include <iostream>
using namespace std;
void merge( int list1[], int size1, int list2[], int size2, const int list3[])
{
    for (int i = 0; i <= size1 + size2 - 1; i++)
    {
        if (i <= size1 - 1)
        {
            list3[i] = list1[i];
        }
        else
        {
            list3[i] = list2[i - size1];
        }
    }
    for (int i = size1 + size2; i >= 1; i--)
    {
        for (int n = 0; n <= i - 2; n++)
        {
            if (list3[n] > list3[n + 1])
            {
                int temp = list3[n];
                list3[n] = list3[n + 1];
                list3[n + 1] = temp;
            }
        }
    }

}
int main()
{
    int size1;
    int size2;
    int list1[80], list2[80], list3[160];
    cout << "您输入的第一个数组长度为:";
    cin >> size1;
    cout << "enter the first array:";
    for (int i = 0; i <= size1 - 1; i++)
    {
        cin >> list1[i];
    }
    cout << "您输入的第二个数组长度为:";
    cin >> size2;
    cout << "enter the second array:";
    for (int i = 0; i <= size2 - 1; i++)
    {
        cin >> list2[i];
    }
    cout << endl;
    merge(list1, size1, list2, size2, list3);
    cout << "the third array:";
    for (int i = 0; i <= size2+size1 - 1; i++)
    {
        cout << list3[i]<<" ";
    }
}

