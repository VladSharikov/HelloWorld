#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int x;
	cout << "введите трехзначное число ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "четное число";
	}
	else
	{
		cout << "нечетное число";
	}
	return 0;
}