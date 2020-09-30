

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float s;
    cout << "Введите координаты точки а" << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты точки b" << endl;
    cin >> x2 >> y2;
    s = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "Расстояние между точками a и b =" << " " << s;
}

