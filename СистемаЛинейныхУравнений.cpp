#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y, A1, A2, B1, B2, C1, C2, o, o1, o2;
    cout << "Последовательно введите коэффициенты A1, A2, B1, B2, C1, C2" << endl;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
    o = A1 * B2 - B1 * A2;
    o1 = C1 * B2 - C2 * B1;
    o2 = A1 * C2 - C1 * A2;
    if ((o == 0) && ((o1 != 0) || (o2 != 0))) {
        cout << "Решений нет" << endl;
    }
    if ((o == 0) && (o1 == 0) && (o2 == 0)) {
        cout << "Решений бесконечное множество" << endl;
    }
    if (o != 0) {
        cout << "X = " << o1 / o << endl;
        cout << "Y = " << o2 / o;
    }
}
