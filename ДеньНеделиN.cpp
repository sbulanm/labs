#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, k,n1;
	cout << "������ ����� ��� ������ �� 1-7" << endl;
	cin >> n;
	cout << "������ ����� ��� ���� �� 1 �� 365" << endl;
	cin >> k;
	if ((n < 1) || (n > 7) || (k < 1) || (k > 365)) {
		cout << "������� �����४�� �����" << endl;
	}
	else {
		n1 = ((k-1) % 7)+n;
	}
	if (n1 > 7) {
		n1 = n1 % 7;
		cout <<"����� ��� ������ �-�� ��� = " << n1;
	}
	else {
		cout << "����� ��� ������ �-�� ��� = " << n1;
	}
}

