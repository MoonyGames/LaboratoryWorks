#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a; //Задачу возможно решить и без задействования еще одной переменной
    
    cin >> a;
    
    a = a * a;
    a *= a; a *= a;
    
    cout << a;
    
    return 0;
}
