﻿//Составить программу вывода на экран числа, вводимого с клавиатуры. Выво-
//димому числу должно предшествовать сообщение "Вы ввели число".
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;

    cout << "You have entered a number: " << number << endl;
}

