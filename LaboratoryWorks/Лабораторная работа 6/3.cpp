#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int a = 1, b = 2, c = 3;
    
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
