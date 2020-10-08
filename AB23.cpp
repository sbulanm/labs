#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "введите числа A и B" << endl;
    cin >> a >> b;
    if ((a > 2) && (b <= 3)) {
        cout << "Неравенства A > 2 и B <= 3 справедливы";
    }
    else {
        cout << "Неравенства A > 2 и B <= не выполняются";
    }
}
