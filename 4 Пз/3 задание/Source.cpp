#include <iostream>
#include <string>
using namespace std;
int main()
{
    srand(time(0));
    int n, k, z, h;
    cout << "Number of rows in the first matrix   ";
    cin >> n;
    cout << "Number of columns in the first matrix   ";
    cin >> k;
    cout << "Number of rows in the second matrix  ";
    cin >> z;
    cout << "Number of columns in the second matrix   ";
    cin >> h;
    cout << "the first matrix\n";
    int** matrix1 = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[k];
        for (int j = 0; j < k; j++) {
            matrix1[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl << "\n";
    }
    cout << "the second matrix\n";
    int** matrix2 = new int* [z];
    for (int i = 0; i < z; i++) {
        matrix2[i] = new int[h];
        for (int j = 0; j < h; j++) {
            matrix2[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < h; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl << "\n";
    }
    int matrix3[1][1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < h; j++)
        {
            matrix3[i][j] = 0;
            for (int l = 0; l < z; l++)
                matrix3[i][j] = matrix3[i][j] + matrix1[i][l] * matrix2[l][j];
        }
    cout << "\nMultiplication result\n";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < h; j++)
            cout << matrix3[i][j] << "\t";
    }
    cout << endl;
    system("pause");
}