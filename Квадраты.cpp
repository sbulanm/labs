
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	float a, b;
	cout << "Введите два числа" << endl;
	cin >> a >> b;
	cout << "сумма квадратов=" << pow(a,2) + pow(b,2) << endl;
	cout << "разность квадратов=" << pow(a,2) - pow(b,2) << endl;
	cout << "произведение квадратов=" << pow(a, 2) * pow(b, 2) << endl;
	cout << "частное квадратов=" << pow(a, 2) / pow(b, 2);
}


