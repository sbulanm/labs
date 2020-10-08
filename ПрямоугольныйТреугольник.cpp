#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Введите стороны треугольника" << endl;
    cin >> a >> b >> c;
    if ((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2))
        || (pow(c, 2) + pow(b, 2) == pow(a, 2))) {
        cout << "Треугольник с данными сторонами прямоугольный";
    }
    else {
        cout << "Данный треугольник не прямоугольный";
    }
}

