

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2,y3;
    float s1,s2;
    cout << "������ ���न���� �窨 �" << endl;
    cin >> x1 >> y1;
    cout << "������ ���न���� �窨 �" << endl;
    cin >> x2 >> y2;
    cout << "������ ���न���� �窨 �" << endl;
    cin >> x3 >> y3;
    s1 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    s2= sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    cout << "��१�� �� =" << " " << s1 <<endl;
    cout << "��१�� �� =" << " " << s2 << endl;
    cout << "�㬬� ��१��� =" << s1 + s2;
}

