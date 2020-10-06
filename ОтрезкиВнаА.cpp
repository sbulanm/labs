#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int A, B,N;
	cout << "Введите положительное значение отрезка А" << endl;
	cin >> A;
	cout << "Введите положительное значение отрезка В,меньше А" << endl;
	cin >> B;
	if (A < B) {
		cout << "B должно быть меньше А" << endl;
	}
	else {
		if (A <= 0) {
			cout << "Введите положительные значение длины отрезка А"<< endl;
		}
		if (B <= 0) {
			cout << "Введите положительное значение длины отрезка B ";
		}
		else {
			N = A / B;
			cout << "Количество отрезков В = " <<N;
		}
	}
}

