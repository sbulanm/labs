
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    	    int x1, x2, x3, y1, y2, y3;
    	    float S, P,a,b,c;
            cout << "Введите координаты точки 1 треугольника" << endl;
            cin >> x1 >> y1;
            cout << "Введите координаты точки 2 треугольника" << endl;
            cin >> x2 >> y2;
            cout << "Введите координаты точки 3 треугольника" << endl;
            cin >> x3 >> y3;
            a= sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
            b= sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
            c= sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
            P = a + b + c;
            S = sqrt((P / 2) * ((P / 2) - a) * ((P / 2) - b) * ((P / 2) - c));
            cout << "Периметр треугольника =" << P << endl;
            cout << "Площадь треугольника =" << S << endl;



}
