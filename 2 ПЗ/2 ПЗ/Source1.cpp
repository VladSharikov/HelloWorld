#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "������� ����������� ����� ";

	cin >> a;

	if (a % 2 == 0)
	{
		cout << "������� ��������������= " << endl;
		cout << (a / 100 + ((a / 10) % 10) + a % 10) / 3.;
	}
	else {
		cout << "�� �������������� ��������� �����= " << endl;
		cout << (a / 100 + ((a / 10) % 10) + a % 10) / 3.;
	}
	return 0;
}