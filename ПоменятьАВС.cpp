#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "������ ���祭�� �,� � �" << endl;
    cin >> a >> b >> c;
    d = a;
    a = b;
    b = c;
    c = d;
    cout << "A=" << a << endl;
    cout << "B=" << b<< endl;
    cout << "C=" << c;
}

