#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, d,  e;
	cout << "Введите двузначное число" << endl;
	cin >> a;
	if ((a < 10) || (a>99)) {
		cout << "Вы ввели не двузначное число" << endl;
	}
	else {
		d = a / 10;
		e = a % 10;
		cout << e << d;
	}
}
