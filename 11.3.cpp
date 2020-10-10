#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int ax, ay, bx, by, cx, cy;
    float ac, ab;
    cout << "Введите координаты точки А" << endl;
    cin >> ax >> ay;
    cout << "Введите координаты точки B" << endl;
    cin >> bx >> by;
    cout << "Введите координаты точки C" << endl;
    cin >> cx >> cy;
    ac = sqrt(pow((cx - ax), 2) + pow((cy - ay),2));
    ab = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
    if (ac > ab) {
        cout << "Точка B расположена ближе к точке А" << endl;
        cout << "Расстояние от точки А до точки В = " << ab;
    }
    else if (ac < ab) {
        cout << "Точка C расположена ближе к точке А" << endl;
        cout << "Расстояние от точки А до точки C = " << ac;
    }
    else if (ac = ab) {
        cout << "Расстояние от точки А до точки В равно расстоянию от точки А до точки С" << endl;  
    }
}

