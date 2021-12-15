#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double angle;
    
    cout << "Введите угол в радианах * pi от 0 до 2pi: ";
    cin >> angle;
    
    cout << "Угол в градусах: " << angle * 180;
    
    return 0;
}
