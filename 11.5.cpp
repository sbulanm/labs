#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "������ �᫮" << endl;
	cin >> a;
	if (a < 0) {
		cout << "����⥫쭮� ";

	}
	 if (a>0){
		cout << "������⥫쭮� ";
	}
	  if (a == 0) {
		cout << "�㫥��� �᫮";
	}
	  if ((a % 2 == 0)&&(a!=0)) {
		  cout << "��⭮� �᫮";
	  }
	  if (a % 2 != 0) {
		  cout << "����⭮� �᫮";
	  }
}

