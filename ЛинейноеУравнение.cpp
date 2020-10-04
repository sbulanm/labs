#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x,a,b;
	cout << "Введите коэффициент A не равный 0" << endl;
	cin >> a;
	cout << "Введите коэффициент B" << endl;
	cin >> b;
	x = (-b) / a;
	cout << "X = " << x;
}


