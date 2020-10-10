#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if (a < 0) {
		cout << "отрицательное ";

	}
	 if (a>0){
		cout << "положительное ";
	}
	  if (a == 0) {
		cout << "нулевое число";
	}
	  if ((a % 2 == 0)&&(a!=0)) {
		  cout << "чётное число";
	  }
	  if (a % 2 != 0) {
		  cout << "нечётное число";
	  }
}

