#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, t, s, d, e;
    cout << "������ �����姭�筮� �᫮" << endl;
    cin >> a;
    if ((a < 1000) || (a > 9999)) {
        cout << "�訡��.������ �����姭�筮� �᫮" << endl;
    }
    else {
        t = a / 1000;
        s = (a / 100) % 10;
        d = (a % 100) / 10;
        e = (a % 100) % 10;
    }
    if ((t == e) && (s == d)) {
        cout << "������ �᫮ �⠥��� ��������� ᫥�� ���ࠢ� � �ࠢ� ������";
    }
    else {
        cout << "������ �᫮ �� �⠥��� ��������� ᫥�� ���ࠢ� � �ࠢ� ������";
    }
}
