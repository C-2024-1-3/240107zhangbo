#include <iostream>
using namespace std;
void sort(int* arr, int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
         for(int n = 1; n <= size-1-i; n++)
        {
             int temp = *(arr + (n - 1));
             if (*(arr + n) < *(arr + (n - 1)))
             {
                  *(arr + (n - 1))=* (arr + n);
                  *(arr + n) = temp;
             }
        }
    }
}
int main()
{
    int size;
    cout << "输入数组元素个数:";
    cin >> size;
    int* list = new int[size];
    cout << "输入数组元素:";
    for (int i = 0; i <= size-1; i++)
    {
        cin >> list[i];
    }
    sort(list, size);
    cout << "数组:";
    for (int i = 0; i <= size-1; i++)
    {
        cout << *(list+i)<<" ";
    }
    cout << endl;
    delete[]list;
}
