#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, s, p;
	cout << "������� ����� = ";
	cin >> a;
	cout << "������� ������ = ";
	cin >> b;
	p = 2 * (a + b);
	s = a * b;
	cout << "�������� �������������� = " << p << endl;
	cout << "������� �������������� = " << s << endl;
	for (int height = 1; height <= b; height++)
	{
		for (int width = 1; width <= a; width++)
		{
			if (width > 1 && width < a && height > 1 && height < b)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}