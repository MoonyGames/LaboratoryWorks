#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a, b, c;
    
    cout << "Введите три числа через пробел: ";
    cin >> a >> b >> c;
    
    b += a;
    a = b - a;
    b -= a;
    
    c += b;
    b = c - b;
    c -= b;
    
    a += c;
    c = a - c;
    a -= c;
    
    
    cout << a << b << c;
    
    return 0;
}
