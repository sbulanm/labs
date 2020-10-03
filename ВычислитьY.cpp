#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    float y;
    cout << "Введите x" << endl;
    cin >> x;
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 2), 3) + 2;
    cout << "Y=" << y;

}
