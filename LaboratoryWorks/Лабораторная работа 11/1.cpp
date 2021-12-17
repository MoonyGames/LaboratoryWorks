#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Введите значения переменных A и B через пробел: ";
    cin >> a >> b;
    
    if (a == b){
        a = 0;
        b = 0;
    }
    else if (a > b) b = a;
    else a = b;
    
    cout << "Новое значение переменных A и B: " << a << " " << b;
    
    return 0;
}
