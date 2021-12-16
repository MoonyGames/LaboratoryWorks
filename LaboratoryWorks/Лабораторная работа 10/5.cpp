#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите число: ";
    cin >> n;
    
    if(n / 1000 == n % 10 & (n % 100) / 10 == (n % 1000) / 100) cout << "Данное число читается одинаково слева направо и справа налево";
    else cout << "Данное число не читается одинаково слева направо и справа налево";
    
    return 0;
}
