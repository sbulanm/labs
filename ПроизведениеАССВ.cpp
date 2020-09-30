

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2,y3;
    float s1,s2;
    cout << "Введите координаты точки А" << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты точки В" << endl;
    cin >> x2 >> y2;
    cout << "Введите координаты точки С" << endl;
    cin >> x3 >> y3;
    s1 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    s2= sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    cout << "Отрезок АС =" << " " << s1 <<endl;
    cout << "Отрезок ВС =" << " " << s2 << endl;
    cout << "Произведение отрезков =" << s1 * s2;
}

