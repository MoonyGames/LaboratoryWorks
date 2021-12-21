#include <iostream>
#include <math.h>

using namespace std;

float Fact2(int n){
    float sum = 1;
    
    if (n % 2 == 0){
        for (int i = 2; i <= n; i += 2){
            sum *= i;
        }
    }
    else{
        for (int i = 1; i <= n; i += 2){
            sum *= i;
        }
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите число N: ";
    cin >> n;
    
    cout << Fact2(n);
    
    return 0;
}
