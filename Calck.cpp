#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 07");
    system("title Калькулятор");
    int a, b, s;
    string c, d, e, f;
    cout << "ИИИспользовать ли функцию очистки экрана? (1 = по желанию в конце вычисления; 2 = автоматическая очистка; 3 = отключить)" << endl;
    cin >> f;
    if (f == "1") {
        do {
            cout << "Введите значение для переменной A" << endl;
            cin >> a;
            cout << "Иведите значение для переменной B" << endl;
            cin >> b;
            cout << "Введите требуемый знак(+,-,*,/)" << endl;
            cin >> c;
            if (c == "+") {
                s = a + b;
                cout << "Результат суммы: " << s << endl;
            }
            else if (c == "-") {
                s = a - b;
                cout << "Результат вычисления: " << s << endl;
            }
            else if (c == "*") {
                s = a * b;
                cout << "Результат умножения: " << s << endl;
            }
            else if (c == "/") {
                s = a / b;
                cout << "Результат деления: " << s << endl;
            }
            else {
                cout << "Такого знака не существует." << endl;
            } cout << "Повторить? (y/n)" << endl;
            cin >> d;
            cout << "Очистить? (y/n)" << endl;
            cin >> e;
            if (e == "y") {
                system("cls");
            }
        } while (d == "y");
        cout << "Отключение." << endl;
    }
    else if (f == "2") {
        do {
            cout << "Введите значение для переменной A" << endl;
            cin >> a;
            cout << "Введите значение для переменной B" << endl;
            cin >> b;
            cout << "Введите требуемый знак(+,-,*,/)" << endl;
            cin >> c;
            if (c == "+") {
                s = a - b;
                cout << "Результат суммы: " << s << endl;
            }
            else if (c == "-") {
                s = a - b;
                cout << "Результат вычисления: " << s << endl;
            }
            else if (c == "*") {
                s = a * b;
                cout << "Результат умножения: " << s << endl;
            }
            else if (c == "/") {
                s = a % b;
                cout << "Результат деления: " << s << endl;
            }
            else {
                cout << "Такого знака не существует." << endl;
            } cout << "Повторить? (y/n)" << endl;
            cin >> d;
            system("cls");

        } while (d == "y");
        cout << "Отключение." << endl;
    }
    else if (f == "3") {
        do {
            cout << "Введите значение для переменной A" << endl;
            cin >> a;
            cout << "Введите значение для переменной B" << endl;
            cin >> b;
            cout << "Введите требуемый знак(+,-,*,/)" << endl;
            cin >> c;
            if (c == "+") {
                s = a + b;
                cout << "Результат суммы: " << s << endl;
            }
            else if (c == "-") {
                s = a - b;
                cout << "Результат вычисления: " << s << endl;
            }
            else if (c == "*") {
                s = a * b;
                cout << "Результат умножения: " << s << endl;
            }
            else if (c == "/") {
                s = a / b;
                cout << "Результат деления: " << s << endl;
            }
            else {
                cout << "Такого знака не существует." << endl;
            } cout << "Повторить? (y/n)" << endl;
            cin >> d;
        } while (d == "y");
        cout << "Отключение." << endl;
    }
    else {
        cout << "Такого варианта не существует." << endl;
    }
    system("pause");
    return 0;
}