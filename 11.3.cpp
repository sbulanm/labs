#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int ax, ay, bx, by, cx, cy;
    float ac, ab;
    cout << "������ ���न���� �窨 �" << endl;
    cin >> ax >> ay;
    cout << "������ ���न���� �窨 B" << endl;
    cin >> bx >> by;
    cout << "������ ���न���� �窨 C" << endl;
    cin >> cx >> cy;
    ac = sqrt(pow((cx - ax), 2) + pow((cy - ay),2));
    ab = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
    if (ac > ab) {
        cout << "��窠 B �ᯮ������ ����� � �窥 �" << endl;
        cout << "�����ﭨ� �� �窨 � �� �窨 � = " << ab;
    }
    else if (ac < ab) {
        cout << "��窠 C �ᯮ������ ����� � �窥 �" << endl;
        cout << "�����ﭨ� �� �窨 � �� �窨 C = " << ac;
    }
    else if (ac = ab) {
        cout << "�����ﭨ� �� �窨 � �� �窨 � ࠢ�� ����ﭨ� �� �窨 � �� �窨 �" << endl;  
    }
}

