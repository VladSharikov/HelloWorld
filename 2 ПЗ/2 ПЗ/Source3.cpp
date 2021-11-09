#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int mounth;
	cout << "Введите номер месяца" << endl;
	cin >> mounth;
	switch (mounth)
	{
	case 1:
		cout << "Январь-";
		cout << "Зима";
		break;
	case 2:
		cout << "Февраль-";
		cout << "Зима";
		break;
	case 3:
		cout << "Март-";
		cout << "Весна";
		break;
	case 4:
		cout << "Апрель-";
		cout << "Весна";
		break;
	case 5:
		cout << "Май-";
		cout << "Весна";
		break;
	case 6:
		cout << "Июнь-";
		cout << "Лето";
		break;
	case 7:
		cout << "Июль-";
		cout << "Лето";
		break;
	case 8:
		cout << "Август-";
		cout << "Лето";
		break;
	case 9:
		cout << "Сентябрь-";
		cout << "Осень";
		break;
	case 10:
		cout << "Октябрь-";
		cout << "Осень";
		break;
	case 11:
		cout << "Ноябрь-";
		cout << "Осень";
		break;
	case 12:
		cout << "Декабрь-";
		cout << "Зима";
		break;
	default:
		cout << "Ошибка";
		break;
	}
	return 0;
}