#include<iostream>
using namespace std;

int main()
{
    signed a = 3.1415926;
    double h, r;
    cout << "请输入圆锥的高h(cm)：";
    cin >> h;
    cout << "请输入圆锥的半径r(cm)：";
    cin >> r;
    double v = a * h * r * r / 3;
    cout << "圆锥的体积v(cm^3)：" << v << endl;

    return 0;
}

