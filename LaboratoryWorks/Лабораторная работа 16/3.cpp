#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, a, b;
    
    cout << "Введите числа N, A и B через пробел: ";
    cin >> n >> a >> b;
    
    int progression[n];
    progression[0] = a;
    progression[1] = b;
    
    for (int i = 2; i < n; i++){
        int sum = 0;
        
        for (int y = 0; y < i; y++){
            sum += progression[y];
        }
        
        progression[i] = sum;
    }
    
    for (int i = 0; i < n; i++){
        cout << progression[i] << endl;
    }
    
    return 0;
}
