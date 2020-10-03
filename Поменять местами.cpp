#include <iostream>
using namespace std;

int main()
{
	int A, B ,C;
	cout << "Введите значение А и В" << endl;
	cin >> A >> B;
	C = A;
	A = B;
	B = C;
	cout << "А=" << A << endl;
	cout << "B=" << B << endl;
}
