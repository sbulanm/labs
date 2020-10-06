#include <iostream>
#include <math.h>
using namespace std;
int main()
{    
    int b, k;
    cout << "Введите количество байт" << endl;
    cin >> b;
    k = b / 1024;
    cout << "Целое количество килобайт = " << k;
}

