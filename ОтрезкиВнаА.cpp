#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int A, B,N;
	cout << "������ ������⥫쭮� ���祭�� ��१�� �" << endl;
	cin >> A;
	cout << "������ ������⥫쭮� ���祭�� ��१�� �,����� �" << endl;
	cin >> B;
	if (A < B) {
		cout << "B ������ ���� ����� �" << endl;
	}
	else {
		if (A <= 0) {
			cout << "������ ������⥫�� ���祭�� ����� ��१�� �"<< endl;
		}
		if (B <= 0) {
			cout << "������ ������⥫쭮� ���祭�� ����� ��१�� B ";
		}
		else {
			N = A / B;
			cout << "������⢮ ��१��� � = " <<N;
		}
	}
}

