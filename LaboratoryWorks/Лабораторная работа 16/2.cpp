#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, a, d;
    
    cout << "Введите число N, первый член A и знаменатель D через пробел: ";
    cin >> n >> a >> d;
    
    int progression[n];
    progression[0] = a;
    
    for (int i = 1; i < n; i++){
        progression[i] = a * pow(d, i);
    }
    
    for (int i = 0; i < n; i++){
        cout << progression[i] << endl;
    }
    
    return 0;
}
