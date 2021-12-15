#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double angle;
    
    cout << "Введите угол в градусах от 0 до 360: ";
    cin >> angle;
    
    cout << "Угол в радианах: " << angle / 180 << "pi";
    
    return 0;
}
