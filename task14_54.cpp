//Имеются два файла, элементами которого являются числа. Получить третий
//файл, в котором записаны сначала числа из первого файла, а затем — из вто -
//рого.Порядок следования чисел сохраняется.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Использование: <файл1> <файл2> <файл_результат>" << endl;
        return 1;
    }

    string file1 = argv[1];
    string file2 = argv[2];
    string outputFile = argv[3];

    ifstream fin1(file1);
    if (!fin1) {
        cerr << "Не удалось открыть файл " << file1 << " для чтения." << endl;
        return 1;
    }

    ifstream fin2(file2);
    if (!fin2) {
        cerr << "Не удалось открыть файл " << file2 << " для чтения." << endl;
        return 1;
    }

    ofstream fout(outputFile);
    if (!fout) {
        cerr << "Не удалось открыть файл " << outputFile << " для записи." << endl;
        return 1;
    }

    int num;

    // Записываем числа из первого файла
    while (fin1 >> num) {
        fout << num << " ";
    }

    // Записываем числа из второго файла
    while (fin2 >> num) {
        fout << num << " ";
    }

    cout << "Числа успешно записаны в файл " << outputFile << endl;

    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
