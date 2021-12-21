#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int s = 1000, p, i = 0;
    
    cout << "Введите процентную ставку на вклад: ";
    cin >> p;
    
    while (s < 1100){
        s += s * (p / 100);
        i++;
    }
    
    cout << "Итоговая сумма: " << s << ". Эта сумма накопится за " << i << " месяцев";
    
    return 0;
}
