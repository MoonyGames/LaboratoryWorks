#include <iostream>
#include <math.h>

using namespace std;
 
int fib(int n){
    int f = 0, f0 = 1, res = 1, i = 0;
    
    while (i <= n){
        res = f;
        f = f0 + f;
        f0 = res;
        i++;
        
        if (n == f) return i;
    }
    
    if (n == 0) return 0;
    else return -1;
}
 
int main(int argc, const char * argv[]){
    int n;
    
    cout << "Введите N: ";
    cin >> n;
    
    cout << "Порядковый номер числа фибоначи N: " << fib(n) + 1;
    
    return 0;
}
