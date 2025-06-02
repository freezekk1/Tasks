/*Вычислить значение логического выражения при следующих значениях логи-
ческих величин X, Y и Z: X = Истина, Y = Истина, Z = Ложь:

а) не X и Y; б) X или не Y; в) X или Y и Z.
*/

#include <iostream>
using namespace std;

int main() {
    bool X = true;
    bool Y = true;
    bool Z = false;

    bool a = !X && Y;
    bool b = X || !Y;
    bool c = X || Y && Z;  

    cout << "а) !X && Y = " << a << endl;
    cout << "б) X || !Y = " << b << endl;
    cout << "в) X || Y && Z = " << c << endl;

    return 0;
}
