#include <iostream>
using namespace std;

int main()
{
    int d, m;
    cout << "������ ���� ����� �� 1 �� 31" << endl;
    cin >> d;
    cout << "������ ����� ����� �� 1 �� 12" << endl;
    cin >> m;
    if ((d > 31) || (d < 1) || (m < 1) || (m > 12)) {
        cout << "������� �����४�� �����";
    }
    else {
        switch (d) {
        case 1:
            cout << "��ࢮ� ";
            break;
        case 2:
            cout << "��஥�� ";
            break;
        case 3:
            cout << "���� ";
            break;
        case 4:
            cout << "����⮥ ";
            break;
        case 5:
            cout << "��⮥ ";
            break;
        case 6:
            cout << "��⮥ ";
            break;
        case 7:
            cout << "ᥤ쬮� ";
            break;
        case 8:
            cout << "���쬮� ";
            break;
        case 9:
            cout << "����⮥ ";
            break;
        case 10:
            cout << "����⮥ ";
            break;
        case 11:
            cout << "��������⮥ ";
            break;
        case 12:
            cout << "�������⮥ ";
            break;
        case 13:
            cout << "�ਭ���⮥ ";
            break;
        case 14:
            cout << "���ୠ��⮥ ";
            break;
        case 15:
            cout << "��⭠��⮥ ";
            break;
        case 16:
            cout << "��⭠��⮥ ";
            break;
        case 17:
            cout << "ᥬ����⮥ ";
            break;
        case 18:
            cout << "��ᥬ����⮥ ";
            break;
        case 19:
            cout << "����⭠��⮥ ";
            break;
        case 20:
            cout << "�����⮥ ";
            break;
        case 21:
            cout << "������� ��ࢮ� ";
            break;
        case 22:
            cout << "������� ��஥ ";
            break;
        case 23:
            cout << "������� ���� ";
            break;
        case 24:
            cout << "������� �⢥�⮥ ";
            break;
        case 25:
            cout << "������� ��⮥ ";
            break;
        case 26:
            cout << "������� ��⮥ ";
            break;
        case 27:
            cout << "������� ᥤ쬮� ";
            break;
        case 28:
            cout << "������� ���쬮� ";
            break;
        case 29:
            cout << "������� ����⮥ ";
            break;
        case 30:
            cout << "�ਤ�⮥ ";
            break;
            case 31:
                cout << "�ਤ��� ��ࢮ� ";
                break;
        }
        switch (m) {
        case 1:
            cout << "ﭢ���";
            break;
        case 2:
            cout << "䥢ࠫ�";
            break;
        case 3:
            cout << "����";
            break;
        case 4:
            cout << "��५�";
            break;
        case 5:
            cout << "���";
            break;
        case 6:
            cout << "���";
            break;
        case 7:
            cout << "���";
            break;
        case 8:
            cout << "������";
            break;
        case 9:
            cout << "ᥭ����";
            break;
        case 10:
            cout << "������";
            break;
        case 11:
            cout << "�����";
            break;
        case 12:
            cout << "�������";
            break;
        }
    }
}


