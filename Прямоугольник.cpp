

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float v1, v2, S, P;
    cout << "������ ���न���� ���設� 1 ��אַ㣮�쭨�� " << endl;
    cin >> x1 >> y1 ;
    cout << "������ ���न���� ���設� 2 ��אַ㣮�쭨�� " << endl;
    cin >> x2 >> y2 ;
    v1 = sqrt(pow((x2 - x2), 2) + pow((y2 - y1), 2));
    v2 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    S = v1 * v2;
    P = 2 * (v1 + v2);
    cout << "���頤� ��אַ㣮�쭨�� = " << S << endl;
    cout << "��ਬ��� ��אַ㣮�쭨�� " << P << endl;



}
