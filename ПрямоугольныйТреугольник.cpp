#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "������ ��஭� ��㣮�쭨��" << endl;
    cin >> a >> b >> c;
    if ((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2))
        || (pow(c, 2) + pow(b, 2) == pow(a, 2))) {
        cout << "��㣮�쭨� � ����묨 ��஭��� ��אַ㣮���";
    }
    else {
        cout << "����� ��㣮�쭨� �� ��אַ㣮���";
    }
}

