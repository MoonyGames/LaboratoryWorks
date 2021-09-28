#include <iostream>
#include <math.h> //Подключаем библиотеку для математических рассчетов

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    float a, b;
    
    cout << "Введите два ненулевых числа через пробел: ";
    cin >> a >> b; //Вводим значение a и b
    
    a = pow(a, 2); //Перезаписываем переменную a квадратом a, подсчитанным с помощью функции pow(x, y) из math.h
    b = pow(b, 2); //Перезаписываем переменную b квадратом b, подсчитанным с помощью функции pow(x, y) из math.h
    
    cout << "Сумма: " << a + b << " Разность: " << a - b << " Произведение: " << a * b << " Частное: " << a / b << endl; //Считаем и выводим сумму, разность, произведение и частное квадратов введенных чисел
    
    return 0;
}
