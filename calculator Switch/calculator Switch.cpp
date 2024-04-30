


#include <iostream>
#include <Windows.h> // Включаем библиотеку для настройки кодировки консоли
using namespace std;

int main() { 
    SetConsoleCP(1251); // Устанавливаем кодировку ввода
    SetConsoleOutputCP(1251); // Устанавливаем кодировку вывода

    char operation;
    double num1, num2;

    cout << "Simple calculator" << endl;
    cout << "enter the first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;

    cout << "choose an operetion:" << endl;
    cout << "1. addition (+)" << endl;
    cout << "2. subtraction (-)" << endl;
    cout << "3. multiplication (*)" << endl;
    cout << "4. divding (/)" << endl;
    cout << "enter the operetion number: ";
    cin >> operation;

    switch (operation) {
    case '1':
        cout << "result: " << num1 + num2 << endl;
        break;
    case '2':
        cout << "result: " << num1 - num2 << endl;
        break;
    case '3':
        cout << "result: " << num1 * num2 << endl;
        break;
    case '4':
        if (num2 != 0) {
            cout << "result: " << num1 / num2 << endl;
        }
        else {
            cout << "error:division  by zero!" << endl;
        }
        break;
    default:
        cout << "error: invalid operetion!" << endl;
        break;
    }

    return 0;
}










