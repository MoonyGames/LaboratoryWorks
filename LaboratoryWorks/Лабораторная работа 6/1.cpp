#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a, b;
    
    cout << "Введите два числа через пробел: ";
    cin >> a >> b;
    
    b += a;
    a = b - a;
    b -= a;
    
    cout << a << b;
    
    return 0;
}
