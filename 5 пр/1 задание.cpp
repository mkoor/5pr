#include <iostream>
using namespace std;

bool Prost(int n)
{
	if (n < 1)
		return false;
	for (int j = 2; j * j <= n; ++j)
	{
		if (n % j == 0)
		{
			return false;
		}
		return true;
	}
}

int main()
{
	setlocale(0, "");
	int a, b, k = 1;
	a = 1;
	b = 200;
	for (int i = a; i <= b; i++)
	{
		if (Prost(i))
		{
			if (i > k * 10)
				cout << endl;
			cout << i << " ";
		}
	}
	return 0;
}