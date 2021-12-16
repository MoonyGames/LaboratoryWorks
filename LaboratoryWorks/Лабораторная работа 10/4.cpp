#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите число: ";
    cin >> n;
    
    if(n % 10 > (n % 100) / 10 & (n % 100) / 10 > n / 100) cout << "Цифры данного числа образуют возрастающую или убывающую последовательность";
    else cout << "Цифры данного числа не образуют возрастающую или убывающую последовательность";
    
    return 0;
}
