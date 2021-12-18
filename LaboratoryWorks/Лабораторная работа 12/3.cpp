#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string partOfText[3] = {" учебное задание", " учебных задания", " учебных заданий"};
    string partOfText2[31] = {"десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать", "двадцать", "двадцать одно", "двадцать два", "двадцать три", "двадцать четыре", "двадцать пять", "двадцать шесть", "двадцать семь", "двадцать восемь", "двадцать девять", "тридцать", "тридцать одно", "тридцать два", "тридцать три", "тридцать четыре", "тридцать пять", "тридцать шесть", "тридцать семь", "тридцать восемь", "тридцать девять", "сорок"};
    
    int n;
    
    cout << "Введите количество заданий от 10 до 40: ";
    cin >> n;
    
    if (n <= 20) cout << partOfText2[n - 10] + partOfText[2];
    else if (n % 10 > 1 & n % 10 < 5) cout << partOfText2[n - 10] + partOfText[1];
    else if (n % 10 >= 5) cout << partOfText2[n - 10] + partOfText[2];
    else if (n % 10 == 1) cout << partOfText2[n - 10] + partOfText[0];
    else if (n % 10 == 0) cout << partOfText2[n - 10] + partOfText[2];

    return 0;
}
