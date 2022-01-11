#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    int b[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: " << endl;
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива B: " << endl;
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++){
        int buffer = a[i] + b[i];
        
        a[i] = buffer - a[i];
        b[i] = buffer - a[i];
    }
    
    for (int i = 0; i < n; i++){
        cout << "Элемент " << i << " массива A: " << a[i] << endl;
        cout << "Элемент " << i << " массива B: " << b[i] << endl;
    }
    
    return 0;
}
