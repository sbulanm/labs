#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int k;
    cout << "������ �᫮ �� 1 �� 365" << endl;
    cin >> k;
    if ((k < 1) || (k > 365)) {
        cout << "K ������ �ਭ�������� �஬����� [1;365]" << endl;
    }
    else {
        cout << "����� ��� ������ �-��� ��� = " << k % 7;
    }
}
