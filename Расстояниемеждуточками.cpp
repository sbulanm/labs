

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float s;
    cout << "������ ���न���� �窨 �" << endl;
    cin >> x1 >> y1;
    cout << "������ ���न���� �窨 b" << endl;
    cin >> x2 >> y2;
    s = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "�����ﭨ� ����� �窠�� a � b =" << " " << s;
}

