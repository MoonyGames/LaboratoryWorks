#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    float n;
    float i = 1;
    float sum = 1;
    
    cout << "Введите количество сомножителей: ";
    cin >> n;
    
    for(int k = 0; k < n; k++){
        i += 0.1f;
        sum *= i;
    }
    
    cout << "Произведение сомножителей: " << sum;
    
    return 0;
}
