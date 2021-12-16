#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cout << "Введите числа A, B и С через пробел: ";
    cin >> a >> b >> c;
    
    if(a < b < c) cout << "Справедливо двойное неравенство A < B < C";
    else cout << "Несправедливо двойное неравенство A < B < C";
    
    return 0;
}
