#include <iostream>
#include <cmath>
using namespace std;
double a1(double a, double b) {
    return a + b;
}
double a2(double a, double b) {
    return a - b;
}
double a3(double a, double b) {
    return a * b;
}
double a4(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Не люблю ноль!!!" << endl;
        return 0.0;
    }
}
double a5(double base, double exponent) {
    return pow(base, exponent);
}
double a6(double number) {
    if (number >= 0) {
        return sqrt(number);
    }
    else {
        cout << "Математика тебя не любит. Ты слишком отрицательный" << endl;
        return 0.0;
    }
}
double a7(double number) {
    return number * 0.01;
}
int a8(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * a8(n - 1);
    }
}
int main() {
    int choice;
    double num1, num2;
    setlocale(LC_ALL, "Russian");
    do {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Квадратный корень" << endl;
        cout << "7. 1 процент от числа" << endl;
        cout << "8. Факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << a1(num1, num2) << endl;
            break;
        case 2:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << a2(num1, num2) << endl;
            break;
        case 3:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << a3(num1, num2) << endl;
            break;
        case 4:
            cout << "Введите два числа: ";
            cin >> num1 >> num2;
            cout << "Результат: " << a4(num1, num2) << endl;
            break;
        case 5:
            cout << "Введите основание и показатель степени: ";
            cin >> num1 >> num2;
            cout << "Результат: " << a5(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << a6(num1) << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << a7(num1) << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << a8(static_cast<int>(num1)) << endl;
            break;
        case 9:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Этой функции ещё нет, но может появится. Введите от 1 до 9!!!!" << endl;
        }
    } while (choice != 9);
    return 0;
}