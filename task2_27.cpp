/*В трехзначном числе x зачеркнули первую цифру.Когда полученное число
умножили на 10, а произведение сложили с первой цифрой числа x, то полу -
чилось число n.По заданному n найти число x(значение n вводится с клавиа -
    туры, 1 ≤ n ≤ 999).
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите n (1 ≤ n ≤ 999): ";
    cin >> n;

    if (n < 1 || n > 999) {
        cout << "Ошибка: n должно быть от 1 до 999." << endl;
        return 1;
    }

    int x = -1;


    for (int a = 1; a <= 9; ++a) {             // a - сотни (первая цифра)
        for (int b = 0; b <= 9; ++b) {         // b — десятки
            for (int c = 0; c <= 9; ++c) {     // c — единицы
                int original = a * 100 + b * 10 + c;       
                int transformed = (b * 10 + c) * 10 + a;   

                if (transformed == n) {
                    x = original;
                    break;
                }
            }
            if (x != -1) break;
        }
        if (x != -1) break;
    }

    if (x != -1)
        cout << "Исходное число x: " << x << endl;
    else
        cout << "Не существует такого трёхзначного числа x для данного n." << endl;

    return 0;
}
