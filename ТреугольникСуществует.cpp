#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "������ ��஭� ��㣮�쭨��" << endl;
    cin >> a >> b >> c;
    if ((a+b>c) && (a+c>b) && (b+c>a)) {
        cout << "��㣮�쭨� �������";
    }
    else {
        cout << "����� ��㣮�쭨� �� �������";
    }
}