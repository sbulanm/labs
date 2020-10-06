#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, d, e,s;
	cout << "Введите трёхзначно число" << endl;
	cin >> a;
	if ((a < 100) || (a > 999)) {
		cout << "Вы ввели не трёхзначное число" << endl;
	}
	else {
		s = a / 100;
		d = (a / 10 )%10;
		e = (a % 100)%10;
		cout << d << e << s;
	}
}