

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	float a, b;
	cout << "Введите два числа" << endl;
	cin >> a >> b;
	cout << "сумма модулей=" << abs(a) + abs(b) << endl;
	cout << "разность модулей=" << abs(a) - abs(b) << endl;
	cout << "произведение моддулей=" << abs(a) * abs(b) << endl;
	cout << "частное модулей=" << abs(a) / abs(b) << endl;
}
