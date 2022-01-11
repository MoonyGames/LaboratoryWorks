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
        int srAr = 0, count = 0;
        
        for (int y = 0; y <= i; y++){
            srAr += a[y];
            count += 1;
        }
        
        b[i] = srAr / count;
    }
    
    for (int i = 0; i < n; i++){
        cout << i << " элемент массива B: " << b[i] << endl;
    }
}
