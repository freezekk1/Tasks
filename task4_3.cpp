﻿/*Определить, в какую из областей — I или II (рис. 4.1) — попадает точка с за-
данными координатами. Для простоты принять, что точка не попадает на гра-
ницу областей.
*/
#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    if ((x < 4) and (y >= 0))
        cout << "Точка попадает в область I" << endl;
    else if ((x > 4) and (y >= 0))
        cout << "Точка попадает в область II" << endl;
    return 0;
}
