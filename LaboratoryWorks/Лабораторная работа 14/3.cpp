#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, sum = 0, i = 0;
    
    cout << "Введите число N: ";
    cin >> n;
    
    while (sum < n){
        i++;
        sum += i;
    }
    
    cout << "Наименьшее число K равно: " << i;
    
    return 0;
}
