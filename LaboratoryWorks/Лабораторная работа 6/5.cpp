#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double x;
    
    cin >> x;
    
    cout << "y = " << 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
}
