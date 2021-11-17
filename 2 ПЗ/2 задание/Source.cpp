#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите трехзначное число ";

	cin >> a;

	if (a % 2 == 0)
	{
		cout << "среднее арифметическое= " << endl;
		cout << (a / 100 + ((a / 10) % 10) + a % 10) / 3.;
	}
	else {
		cout << "ср арифметическое нечетного числа= " << endl;
		cout << (a / 100 + ((a / 10) % 10) + a % 10) / 3.;
	}
	return 0;
}