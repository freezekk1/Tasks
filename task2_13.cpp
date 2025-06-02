//Дано трехзначное число. Найти число, полученное при прочтении его цифр
//справа налево.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите трёхзначное число: ";
    cin >> num;


    if (num < 100 || num > 999) {
        cout << "Ошибка: число должно быть трёхзначным." << endl;
        return 1;
    }

    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;       // берем последнюю цифру
        reversed = reversed * 10 + digit;  // добавляем цифру в новое число
        num /= 10;                  // убираем последнюю цифру из исходного числа
    }

    cout << "Число при чтении справа налево: " << reversed << endl;
    return 0;
}
