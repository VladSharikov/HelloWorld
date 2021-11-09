#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int decimal, i, binary;
    i = 2;
    cout << "Введите число ";
    cin >> decimal;
    int two[200];
    int n = 0;
    while (decimal > 1)
    {
        binary = decimal % i;
        two[n] = binary;
        decimal /= i;
        n++;
    }
    n--;
    cout << "Ответ = ";
    cout << 1;
    while (n >= 0)
    {
        cout << two[n];
        n--;
    }
    cout << endl;
    return 0;
}