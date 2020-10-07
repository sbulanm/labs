#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int k;
    cout << "Введите число от 1 до 365" << endl;
    cin >> k;
    if ((k < 1) || (k > 365)) {
        cout << "K должно принадлежать промежутку [1;365]" << endl;
    }
    else {
        cout << "Номер дня недели К-ого дня = " << k % 7;
    }
}
