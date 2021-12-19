#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int sum = 0;
    
    cout << "Введите число N: ";
    cin >> n;
    
    for (int i = 1; i < 2 * n; i += 2){
        sum += i;
        
        cout << "Сумма: " << sum << endl;
    }
    
    cout << sum;
    
    return 0;
}

