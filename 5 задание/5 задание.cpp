#include <iostream>
#pragma warning(default:4716)
using namespace std;


int s(int a)
{
	int b, c, d;

	if (a >= 9999 && a <= 100000)
	{
		b = a / 10000;
		a = a % 10000;
		c = a / 1000;
		a = a % 1000;
		a = a % 100;
		d = a / 10;
		a = a % 10;

		if (b == a && c == d)
		{
			cout << "Это число палиндром";
		}
		else cout << "Это число не палиндром";
	}
	else
		cout << "Вы ввели не пятизначное число!";
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	cout << "Введите пятизначное число: ";
	cin >> a;

	s(a);
	cout << endl;
}