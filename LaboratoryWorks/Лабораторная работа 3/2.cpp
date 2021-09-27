#include <iostream>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    float const pi = 3.14; //Создаем константу числа Пи типа float
    float d;
    
    cin >> d; //Вводим диаметр
    
    cout << "L = " << pi * d << endl; //Выводим посчитанную длину L
}
