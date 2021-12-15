#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a, b;
    
    cout << "Введите A и B через пробел: ";
    cin >> a >> b;
    
    cout << a << " * x + " << b << " = 0" << endl;
    cout << "x = " << b / -a;
    
    return 0;
}
