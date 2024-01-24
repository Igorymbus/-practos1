#include <iostream>
#include <Windows.h>
using namespace std;

int oper;
double a, b, c;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    do
    {
        cout << "Это калькулятор. \n";
        cout << "Выберите операцию: \n";
        cout << "1. Сложение \n";
        cout << "2. Вычитание \n";
        cout << "3. Деление \n";
        cout << "4. Умножение \n";
        cout << "5. Возведение в степень \n";
        cout << "6. Квадратный корень \n";
        cout << "7. Нахождение процента от числа \n";
        cout << "8. Факториал \n";
        cout << "9. Выход \n";
        cin >> oper;

        switch (oper)
        {
        case 1:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            c = a + b;
            cout << "Cумма чисел = " << c << endl;
            break;

        case 2:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            c = a - b;
            cout << "Разность чисел = " << c << endl;
            break;

        case 3:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            c = a / b;
            cout << "Частное чисел = " << c << endl;
            break;

        case 4:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            c = a * b;
            cout << "Произведение чисел = " << c << endl;
            break;

        case 5:
            cout << "Введите первое число: ";
            cin >> a;
            cout << "В какую степень хотите возвести? ";
            cin >> b;
            c = pow(a, b);
            cout << "Степень = " << c << endl;
            break;

        case 6:
            cout << "Введите число, корень которого хотите найти: ";
            cin >> a;
            c = sqrt(a);
            cout << "Корень = " << c << endl;
            break;

        case 7:
            cout << "Введите число, процент которого хотите найти: ";
            cin >> a;
            c = a / 100;
            cout << "Процент = " << c << endl;
            break;

        case 8:
            cout << "Введите число, факториал которого хотите найти: ";
            cin >> a;
            b = 1;
            for (c = 1; c <= a; c++) {
                b = b * c;
            }
            cout << "Факториал = " << b << endl;
            break;
        }

    } while (oper != 9);

    return 0;
}
