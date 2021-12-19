#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string cycleName[5] = {"зеленый", "красный", "желтый", "белый", "черный"};
    string yearName[12] ={"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи"};
    
    int year;
    
    cout << "Введите год: ";
    cin >> year;
    
    if (year < 1984) cout << "Это год " << yearName[(year - 1984) % 12] << " и подцикл " << cycleName[5 - (((year - 1984) / 12) % 5)];
    else cout << "Это год " << yearName[(1984 - year) % 12] << "и подцикл" << cycleName[((1984 - year) / 12) % 5];
    
    return 0;
}
