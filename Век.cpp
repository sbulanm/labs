#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int y;
    cout << "������ ����� ����" << endl;
    cin >> y;
    if (y <= 100) {
        cout << "1 ���" << endl;
    }
    else {
        if ((y % 100) == 0) {
            cout << y / 100 << "���";
        }
        else {
            cout << (y / 100) + 1 << "���";
        }
    }
}


