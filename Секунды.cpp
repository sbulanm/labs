#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N;
    cout << "Введите количество секунд,прошедших с начала суток" << endl;
    cin >> N;
    cout << "С последней минуты прошло " << N % 60 << " секунд";
}
