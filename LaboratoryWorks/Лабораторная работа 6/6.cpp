#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a;
    
    cin >> a;
    
    a = a * a;
    a *= a; a *= a;
    
    cout << a;
}
