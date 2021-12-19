#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Введите числа A и B через пробел: ";
    cin >> a >> b;
    
    while (b < a){
        a -= b;
    }
    
    cout << "Незанятая часть: " << a;
    
    return 0;
}
