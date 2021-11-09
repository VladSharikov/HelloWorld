#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, x, y, z, i; x = 0; y = 1;
	cout << "Введите число "; cin >> n;
	if (n < 0) cout << "Ошибка, выберите другое число\n";
	else {
		if (n == 0) cout << n;
		else
			if (n == 1) cout << n - 1, n;
			else {
				cout << " 0 1";
				for (i = 2; i < n; i++)
				{
					cout << " ", z = x + y;
					cout << z;
					x = y;
					y = z;
				}

				cout << endl;
			}

		int fac; i = 1; fac = 1;


		while (i < n)
		{
			fac = fac * ++i;
		}

		cout << "Факториал = " << fac;

	}
	return 0;
}