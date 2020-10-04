#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x,a;
	float y;
	cout << "Введите количество X килограмм и цену за X килограмм" << endl;
	cin >> x >> a;
	cout << "введите Y килограмм" << endl;
	cin >> y;
	cout << "Цена за Y килограмм =" << a / x * y;


}
