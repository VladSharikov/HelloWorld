#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int mounth;
	cout << "������� ����� ������" << endl;
	cin >> mounth;
	switch (mounth)
	{
	case 1:
		cout << "������-";
		cout << "����";
		break;
	case 2:
		cout << "�������-";
		cout << "����";
		break;
	case 3:
		cout << "����-";
		cout << "�����";
		break;
	case 4:
		cout << "������-";
		cout << "�����";
		break;
	case 5:
		cout << "���-";
		cout << "�����";
		break;
	case 6:
		cout << "����-";
		cout << "����";
		break;
	case 7:
		cout << "����-";
		cout << "����";
		break;
	case 8:
		cout << "������-";
		cout << "����";
		break;
	case 9:
		cout << "��������-";
		cout << "�����";
		break;
	case 10:
		cout << "�������-";
		cout << "�����";
		break;
	case 11:
		cout << "������-";
		cout << "�����";
		break;
	case 12:
		cout << "�������-";
		cout << "����";
		break;
	default:
		cout << "������";
		break;
	}
	return 0;
}