#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "Введите положительное число" << endl;
    cin >> a;
    if ((a % 2 == 0) && (a >= 10) && (a < 100)) {
        cout << "Введённое число является чётным двузначным";
    }
    else {
        cout << "Введённое число не является чётным двузначным";
    }
}
