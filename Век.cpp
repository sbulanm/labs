#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int y;
    cout << "Введите номер года" << endl;
    cin >> y;
    if (y <= 100) {
        cout << "1 век" << endl;
    }
    else {
        if ((y % 100) == 0) {
            cout << y / 100 << "век";
        }
        else {
            cout << (y / 100) + 1 << "век";
        }
    }
}


