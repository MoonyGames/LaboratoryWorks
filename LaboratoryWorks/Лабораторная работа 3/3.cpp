#include <iostream>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    float a, b;
    
    cin >> a >> b; //Вводим два числа
    
    cout << "Среднее арифметическое: " << (a + b) / 2 << endl; //Выводим среднее арифметическое чисел
}
