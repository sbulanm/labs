#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,c;
    float P;
    P = 3,14;
    c = 180;
    float a1;
    cout << "Введите значение угла в радианах" << endl;
    cin >> a;
    a1 = a*P / c;
    cout << "Угол =" << a1 << "радиан";

}
