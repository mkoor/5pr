#include <iostream>
using namespace std;

int arif(int a, int b, int c)
{
	double rezult = (a + b + c) / 3;
	return rezult;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	cout << "Введите число a: ";
	cin >> a;

	int b;
	cout << "Введите число b: ";
	cin >> b;

	int c;
	cout << "Введите число c: ";
	cin >> c;

	double rezult = arif(a, b, c);
	cout << "Среднее арифметическое = " << rezult;
	cout << endl;
}