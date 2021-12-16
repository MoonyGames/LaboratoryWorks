#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Введите числа A и B через пробел: ";
    cin >> a >> b;
    
    if(a > 2 & b <= 3) cout << "Справедливы неравенства A > 2 и B ≤ 3";
    else cout << "Несправедливы неравенства A > 2 и B ≤ 3";
    
    return 0;
}
