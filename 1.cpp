#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    char operation;
    
    do {
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";

        cout << "Введите номер операции: ";
        cin >> operation;

        switch (operation) {
            case '1': { // Сложение
                float a, b;
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a + b << endl;
                break;
            }
            case '2': { // Вычитание
                float a, b;
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a - b << endl;
                break;
            }
            case '3': { // Частное
                double a, b;
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                if (b != 0) {
                    cout << "Результат: " << a / b << endl;
                } else {
                    cout << "Ошибка: деление на ноль\n";
                }
                break;
            }
            case '4': { // Произведение
                float a, b;
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a * b << endl;
                break;
            }
            case '5': { // Возведение в степень
                float a, b;
                cout << "Введите число: ";
                cin >> a;
                cout << "Введите степень: ";
                cin >> b;
                cout << "Результат: " << pow(a, b) << endl;
                break;
            }
            case '6': { // Нахождение квадратного корня
                float a;
                cout << "Введите число: ";
                cin >> a;
                cout << "Результат: " << sqrt(a) << endl;
                break;
            }
            case '7': { // Нахождение 1 процента от числа
                float a;
                cout << "Введите число: ";
                cin >> a;
                cout << "Результат: " << a * 0.01 << endl;
                break;
            }
            case '8': { // Найти факториал числа
                int number;
                int factorial = 1;
                cout << "Введите число: ";
                cin >> number;
                for (int i = 1; i <= number; ++i) {
                    factorial *= i;
                }
                cout << "Результат: " << factorial << endl;
                break;
            }
            case '9': // Выйти из программы
                cout << "Программа завершена.\n";
                break;
            default:
                cout << "Ошибка: неверный номер операции\n";
        }

    } while (operation != '9');

    return 0;
}
