#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int k = 1;
    float a;
    float sum = 0;
    float i = 1;
    
    
    cout << "Введите число N и число A через пробел: ";
    cin >> n >> a;
    
    while (i <= pow(a, n)){
        sum += i;
        i = pow(a, k);
        
        k++;
    }
    
    cout << "Cумма равна: " << sum;
    
    return 0;
}

