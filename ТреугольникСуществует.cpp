#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Введите стороны треугольника" << endl;
    cin >> a >> b >> c;
    if ((a+b>c) && (a+c>b) && (b+c>a)) {
        cout << "Треугольник существует";
    }
    else {
        cout << "Данный треугольник не существует";
    }
}