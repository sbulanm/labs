#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Введите значения А,В и С" << endl;
    cin >> a >> b >> c;
    d = a;
    a = b;
    b = c;
    c = d;
    cout << "A=" << a << endl;
    cout << "B=" << b<< endl;
    cout << "C=" << c;
}

