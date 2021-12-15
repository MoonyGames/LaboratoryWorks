#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a1, b1, c1, a2, b2, c2, x, y;
    
    cout << "Введите A1, B1 и C1 через пробел: ";
    cin >> a1 >> b1 >> c1;
    
    cout << "Введите A2, B2 и C2 через пробел: ";
    cin >> a2 >> b2 >> c2;
    
    x = (c1 * b2 - c2) / (b2 * a1 - a2);
    y = (c2 - a2 * x) / b2;
    
    cout << "Система имеет корни: " << "x = " << x << " y = " << y;
    
    return 0;
}
