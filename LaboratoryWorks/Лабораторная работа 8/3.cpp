#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Введите длины A и B через пробел: ";
    cin >> a >> b;
    
    cout << "Незанятая отрезками длины B часть отрезка длины А: " << a % b;
    
    return 0;
}
