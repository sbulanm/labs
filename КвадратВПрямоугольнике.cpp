#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "������ ��஭� ��אַ㣮�쭨��" << endl;
    cin >> a >> b;
    cout << "������ ��஭� ��஭� ������ " << endl;
    cin >> c;
    if (c * c > a * b) {
        cout << "���頤� ������ ������ ���� ����� ���頤� ��אַ㣮�쭨��"
            << endl << "������ ����襥 ���祭�� ��஭� ������" << endl;
    }
    else {
        cout << "�� ��אַ㣮�쭨�� ࠧ��頥�� " << a * b / (c*c) << " �����⮢" << endl;
        cout << "������⮩ ������� ���頤� =" << a * b %(c* c);
    }
}


