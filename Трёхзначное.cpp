#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, d, e,s;
	cout << "������ ���姭�筮 �᫮" << endl;
	cin >> a;
	if ((a < 100) || (a > 999)) {
		cout << "�� ����� �� ���姭�筮� �᫮" << endl;
	}
	else {
		s = a / 100;
		d = (a / 10 )%10;
		e = (a % 100)%10;
		cout << d << e << s;
	}
}