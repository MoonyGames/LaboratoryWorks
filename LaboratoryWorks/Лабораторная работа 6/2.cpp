#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int a = 1, b = 2, c = 3;
    
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
