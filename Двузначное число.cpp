#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, d,  e;
	cout << "������ ��㧭�筮� �᫮" << endl;
	cin >> a;
	if ((a < 10) || (a>99)) {
		cout << "�� ����� �� ��㧭�筮� �᫮" << endl;
	}
	else {
		d = a / 10;
		e = a % 10;
		cout << e << d;
	}
}
