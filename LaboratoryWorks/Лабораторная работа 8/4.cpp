#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int number, first, second;
    
    cout << "Напишите двузначное число: ";
    cin >> number;
    
    cout << "Инвертированное положение цифр исходного числа: " << number % 10 << number / 10;
    
    return 0;
}
