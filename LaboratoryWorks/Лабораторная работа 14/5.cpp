#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Введите числа A и B через пробел: ";
    cin >> a >> b;
    
    while (a != 0 & b != 0){
        if (a > b) a %= b;
        else b %= a;
    }
    
    cout << "НОД: " << a + b;
    
    return 0;
}
