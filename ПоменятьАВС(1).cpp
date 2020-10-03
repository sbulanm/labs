#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    float y;
    cout << "Введите значения x" << endl;
    cin >> x;
    y = 3 * pow(x, 3) - 6 * pow(x, 2) - 7 * pow((x - 3), 3) + 2;
    cout << "y=0" << y;
}

