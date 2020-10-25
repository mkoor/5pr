#include <iostream>
using namespace std;

float radian(float n)
{
	float a = 57.296 * n;
	return a;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	float n;
	cout << "Введите число (в радианах): ";
	cin >> n;
	float a = radian(n);
	cout << "Число в градусах = " << a;
	cout << endl;
}