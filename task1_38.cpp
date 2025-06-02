// Даны основания и высота равнобедренной трапеции. Найти ее периметр.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, h;

    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter h: " << endl;
    cin >> h;

    double side = sqrt(pow((b - a) / 2, 2) + (h * h));

    double p = a + b + side * 2;
    cout << "Perimeter: " << p << endl;
}
