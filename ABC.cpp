#include <iostream>
using namespace std;
int main()
{
    int a, b,c;
    cout << "введите числа A,B и С" << endl;
    cin >> a >> b>> c;
    if ((a , b) && (b < c)) {
        cout << "Двойное неравенствo A < B < C справедливo";
    }
    else {
        cout << "Двойное неравенствo A < B < C не выполняется";
    }
}