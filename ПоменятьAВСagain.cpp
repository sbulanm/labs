#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D;
	cout << "������ �,� � �" << endl;
	cin >> A >> B >> C;
	D = B;
	B = A;
	A = C;
	C = D;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	cout << "C=" << C ;

}
