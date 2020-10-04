#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int v1, v2, s;
    float t, S1;
    cout << "Введите расстояние между автомобилями" << endl;
    cin >> s;
    cout << "Введите скорость первого автомобиля" << endl;
    cin >> v1;
    cout << "Введите скорость второго автомобиля" << endl;
    cin >> v2;
    cout << "Введите время автомобилей в пути (в часах)" << endl;
    cin >> t;
    S1 = t * (v1 + v2) + s;
    cout << "Расстояние между автомобилями = " << S1 ;
}


