#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b;
	cout << "Введите ширину и длину" << endl;
	cin >> a >> b;
	cout << "Площадь" << " " << a * b << endl;
	cout << "Периметр" << " " << (a + b) * 2;
}
