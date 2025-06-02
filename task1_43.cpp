//Даны два числа. Найти среднее арифметическое и среднее геометрическое их
//модулей.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b; 

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    double absA = abs(a);
    double absB = abs(b);

    double arithmetic = (absA + absB) / 2;
    double geometric = sqrt(absA * absB);

    cout << "Среднее арифметическое модулей: " << arithmetic<< endl;
    cout << "Среднее геометрическое модулей: " << geometric << endl;

}

