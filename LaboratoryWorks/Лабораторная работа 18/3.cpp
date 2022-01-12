#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, last;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: " << endl;
        cin >> a[i];
    }
    
    for (int i = n - 1; i > 0; i--){
        if (a[i] % 2 != 0){
            last = a[i];
            break;
        }
    }
    
    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            a[i] += last;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << i << " элемент массива A: " << a[i];
    }
    
    return 0;
}
