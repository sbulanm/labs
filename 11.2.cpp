#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
	if ((a <= b) && (a < c)) {
		cout << b + c;
	}
	 else if ((b < a) && (b < c)) {
		cout << a + c;
	}
	else if ((c < a) && (c < b)) {
		cout << a + b;
	}
	else if ((c == a) && (c < b)) {
		cout << a + b;
	}
	else if ((b == a) && (b < c)) {
		cout << c + b;
	}
	else if ((c < b) && (c < a)) {
		cout << a + c;
	}
	else if ((c == a) && (c == b)) {
		cout << "Числа равны";
	}
}