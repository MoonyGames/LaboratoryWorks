#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    string property, digits;
    
    cout << "Введите число: ";
    cin >> n;
    
    if(n / 10 != 0 & n / 100 == 0 & n % 2 == 0) cout << "Данное число является четным двузначным";
    else cout << "Данное число не является четным двузначным";
    
    return 0;
    
}
