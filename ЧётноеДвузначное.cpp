#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "������ ������⥫쭮� �᫮" << endl;
    cin >> a;
    if ((a % 2 == 0) && (a >= 10) && (a < 100)) {
        cout << "����񭭮� �᫮ ���� ���� ��㧭���";
    }
    else {
        cout << "����񭭮� �᫮ �� ���� ���� ��㧭���";
    }
}
