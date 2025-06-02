//Дан прямоугольник с размерами 543 130 мм.Сколько квадратов со стороной
//130 мм можно отрезать от него ?
#include <iostream>

using namespace std;

int main() {
    int width = 543;     
    int height = 130;   
    int side = 130;    

    // кйоличество квадратов, которые помещаются по ширине
    int count = width / side;

    cout << "Количество квадратов: " << count << endl;

}
