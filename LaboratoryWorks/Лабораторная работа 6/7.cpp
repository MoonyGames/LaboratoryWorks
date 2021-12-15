#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    double a, aE;
    
    cin >> a;
    
    aE = a * a;
    
    aE *= aE;
    aE *= aE;
    aE *= aE;
    
    aE *= (1 / a);
    
    cout << aE;
}
