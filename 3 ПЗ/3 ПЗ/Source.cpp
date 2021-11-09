#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, s, p;
	cout << "Ввудите длину = ";
	cin >> a;
	cout << "Ввудите ширину = ";
	cin >> b;
	p = 2 * (a + b);
	s = a * b;
	cout << "Периметр прямоугольника = " << p << endl;
	cout << "Площадь прямоугольника = " << s << endl;
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