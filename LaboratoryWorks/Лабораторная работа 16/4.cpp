#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, y = 0;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: ";
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        if ((i + 1) % 2 != 0) cout << a[i - y] << endl;
        else{
            cout << a[n - (1 + y)] << endl;
            
            y += 1;
        }
    }
    
    return 0;
}
