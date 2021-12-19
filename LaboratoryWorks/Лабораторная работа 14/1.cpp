#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Введите числа A и B через пробел: ";
    cin >> a >> b;
    
    for (int i = a; i <= b; i++){
        for (int k = 0; k < i; k++){
            cout << i;
        }
    }
    
    return 0;
}
