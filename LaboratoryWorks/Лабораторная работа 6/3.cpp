#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a, b, c;
    
    cout << "Введите три числа через пробел: ";
    cin >> a >> b >> c;
    
    c += a;
    a = c - a;
    c -= a;
    
    b += c;
    c = b - c;
    b -= c;
    
    a += b;
    b = a - b;
    a -= b;
    
    
    cout << a << b << c;
    
    return 0;
}
