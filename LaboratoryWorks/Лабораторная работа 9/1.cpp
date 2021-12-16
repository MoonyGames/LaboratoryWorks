#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int seconds;
    
    cout << "Введите количество секунд, прошедших с начала дня: ";
    cin >> seconds;
    
    cout << "Прошло " << seconds % 60 << " секунд с начала последней минуты";
    
    return 0;
}
