#include <iostream>
#include "math.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int x, z, l = 0, g = 0;
	cout << "Введите число z: "; cin >> z;
	cout << "Введите число x: "; cin >> x;
	for (int p = 2; p <= z; p++) {
		if (z % p == 0)
		{
			l++;

		}

	}
	if (l == 1) cout << "Число z простое" << endl;
	else cout << "Чилсо z составое" << endl;

	for (int p = 2; p <= x; p++) {
		if (x % p == 0) {
			g++;

		}
	}
	if (g == 1) cout << "Число x простое" << endl;
	else cout << "Число х составное" << endl;

	int nod = -1;
	for (int i = 1; i < min(x, z); i++) {
		if (z % i == 0 && x % i == 0) {
			nod = i;
		}
	}
	if (nod == -1) cout << "НОД не найден." << endl;
	cout << nod << endl;
	return 0;

}