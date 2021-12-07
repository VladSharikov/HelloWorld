#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

string ToString(int intNumber)
{
    char elem; int d; string str = "";
    while (intNumber != 0)
    {
        d = intNumber % 10;
        intNumber = intNumber / 10;
        elem = (char)(d + 48);
        str = elem + str;
    }
    return str;
}
string ToString(int intNumber, int numberOfReturn)
{
    char elem; int d; string strNumber = "", str = "";
    while (intNumber != 0)
    {
        d = intNumber % 10;
        intNumber = intNumber / 10;
        elem = (char)(d + 48);
        str = elem + str;
    }
    for (int i = 0; i < numberOfReturn; i++)
    {
        strNumber += str[i];
    }
    return strNumber;

}
int* createArray(int size)
{
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 21 - 10;
    }
    return array;
}
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}
int NumberOfMeetingsInArray(int* array, int size, int number)
{
    int amountOfMeetings = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
            amountOfMeetings++;
    }
    return amountOfMeetings;
}
char* createCharArray(int size)
{
    char* charArray = new char[size];
    for (int i = 0; i < size; i++) {
        charArray[i] = rand() % 11 + 65;
    }
    return charArray;
}
void printCharArray(char* charArray, int size) {
    for (int i = 0; i < size; i++) {
        cout << charArray[i] << " ";
    }
}
int NumberOfMeetingsInArray(char* charArray, int size, char letter)
{
    int amountOfMeetings = 0;
    for (int i = 0; i < size; i++)
    {
        if (charArray[i] == letter)
            amountOfMeetings++;
    }
    return amountOfMeetings;
}


int main()
{
    srand(time(0));
    string str;
    char letter;
    int intNumber, numberOfReturn, size, amountOfMeetings = 0, number = 0, numberOfTask;
    cout << "1) Number to string(Task1)\n";
    cout << "2) Overloading the function from the first task(Task 2)\n";
    cout << "3) Number of meetings in array(Task 3)\n";
    cout << "4) Overloading the function from the fhird task(Task 3)\n";
    cout << "Select task number ";
    cin >> numberOfTask;
    switch (numberOfTask)
    {
    case 1:cout << "Task 1 " << endl;
        cout << "Enter number  ";
        cin >> intNumber;
        if (intNumber > 0)
        {
            str = ToString(intNumber);
        }
        else str = '-' + ToString(fabs(intNumber));
        cout << "String  " << str << "\n";
        break;
    case 2: cout << "\nTask 2 " << endl;
        cout << "Enter number  ";
        cin >> intNumber;
        cout << "Enter number of return ";
        cin >> numberOfReturn;
        if (intNumber > 0)
        {
            str = ToString(intNumber, numberOfReturn);
        }
        else str = '-' + ToString(fabs(intNumber), numberOfReturn);
        cout << "Your number  " << str << "  \nNumber of return  " << numberOfReturn << "\n";
        break;
    case 3: cout << "\nTask 3 " << endl;
        cout << "Enter size  ";
        cin >> size;
        int* array;
        array = createArray(size);
        cout << " Array  ";
        printArray(array, size);
        cout << "\nNumber ";
        cin >> number;
        if (number >= -10 && number <= 10) {
            amountOfMeetings = NumberOfMeetingsInArray(array, size, number);
            if (amountOfMeetings > 0) {
                cout << "Number " << number << " occours in array " << amountOfMeetings << " times " << endl;
            }
            else {
                cout << "This number is not in the array ";
            }
        }
        else cout << "This number is not in the array ";
        break;
    case 4:cout << " \nTask 3 (overload)" << endl;
        cout << "Enter size  " << endl;
        cin >> size;
        char* charArray;
        charArray = createCharArray(size);
        cout << "Array  ";
        printCharArray(charArray, size);
        cout << "\nLetter  ";
        cin >> letter;
        amountOfMeetings = NumberOfMeetingsInArray(charArray, size, letter);
        if (amountOfMeetings > 0) {
            cout << "Letter  " << letter << " occours in array " << amountOfMeetings << " times " << endl;
        }
        else cout << "This element is not in the array ";
        break;
    }
    system("pause");
    return 0;
}
