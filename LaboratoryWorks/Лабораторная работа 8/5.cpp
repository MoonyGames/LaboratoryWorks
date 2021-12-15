#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int number;
    
    cout << "Напишите трехзначное число: ";
    cin >> number;
    
    cout << "Новое число: " << number - 100 * (number / 100) << number / 100;
    
    return 0;
}
