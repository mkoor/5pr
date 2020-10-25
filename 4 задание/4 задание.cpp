#include <iostream>
using namespace std;

float s(float r)
{
	const double PI = 3.141592653589793238463;

	float rezult = PI * r * r;
	return rezult;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	float r;
	cout << "Введите r: ";
	cin >> r;

	float rezult = s(r);
	cout << "Площадь = " << rezult;
	cout << endl;
}