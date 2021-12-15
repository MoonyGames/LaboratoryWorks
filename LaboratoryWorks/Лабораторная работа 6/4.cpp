#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double x;
    
    cin >> x;
    
    cout << "y = " << 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    
    return 0;
}
