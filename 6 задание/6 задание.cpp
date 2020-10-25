#include <iostream>
using namespace std;

int feet(int n)
{
	int f = 5280 * n;
	return f;
};

double kilom(int n)
{
	double km = 1.61 * n;
	return km;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите расстояние в милях: ";
	cin >> n;

	int f = feet(n);
	cout << "Расстояние в футах = " << f << "\n";
	double km = kilom(n);
	cout << "Расстояние в километрах = " << km;
	cout << endl;
}