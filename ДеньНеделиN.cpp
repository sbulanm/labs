#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, k,n1;
	cout << "Введите номер дня недели от 1-7" << endl;
	cin >> n;
	cout << "Введите номер дня года от 1 до 365" << endl;
	cin >> k;
	if ((n < 1) || (n > 7) || (k < 1) || (k > 365)) {
		cout << "Введены некорректные данные" << endl;
	}
	else {
		n1 = ((k-1) % 7)+n;
	}
	if (n1 > 7) {
		n1 = n1 % 7;
		cout <<"Номер дня недели К-го дня = " << n1;
	}
	else {
		cout << "Номер дня недели К-го дня = " << n1;
	}
}

