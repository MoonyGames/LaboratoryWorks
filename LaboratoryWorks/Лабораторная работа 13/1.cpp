#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    float n, i;
    
    cout << "Введите цену 1 кг конфет: ";
    cin >> n;
    
    while (i <= n){
        i += 0.1f;
        
        cout << "Цена " << i << " кг конфет: " << n * i << endl;
    }
    
    return 0;
}
