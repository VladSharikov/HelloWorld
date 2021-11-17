#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int n, k;
    cout << " ¬ведите n: ";
    cin >> n;
    cout << " ¬ведите k: ";
    cin >> k;
    int** dynamicArray = new int* [n];
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = new int[k];
        for (int j = 0; j < k; j++) {
            dynamicArray[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}