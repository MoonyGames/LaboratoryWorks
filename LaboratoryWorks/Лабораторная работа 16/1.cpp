#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, y = 1;
    
    cout << "Введите число N: ";
    cin >> n;
    
    int oddNumbers[n];
    
    for (int i = 0; i < n; i++){
        oddNumbers[i] = y;
        
        y += 2;
    }
    
    for (int i = 0; i < n; i++){
        cout << oddNumbers[i] << endl;
    }
    
    return 0;
}
