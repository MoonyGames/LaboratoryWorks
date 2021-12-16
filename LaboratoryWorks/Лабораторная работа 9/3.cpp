#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int day, n;
    string dayNames[7] = {
        "понедельник",
        "вторник",
        "среда",
        "четверг",
        "пятница",
        "суббота",
        "воскресенье"
    };
    
    cout << "Введите день года по счету от 1 до 365: ";
    cin >> day;
    
    cout << "Введите с какого по счету дня недели начинается год: ";
    cin >> n;
    
    cout << "Это " << dayNames[day % 7 - 1 + n];
    
    return 0;
}
