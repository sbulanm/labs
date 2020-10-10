#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b;
	cout << "Введите значения А и В" << endl;
	cin >> a >> b;
	if (a == b) {
		a = 0;
		b = 0;
		cout << "A =" << a << endl;
		cout << "B=" << b << endl;
	}
	else {
		if (a > b) {
			b = a;
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
		}
		else {
			a = b;
			cout << "A = " << a << endl;
			cout << "B = " << b << endl;
		}
	}
	
}

