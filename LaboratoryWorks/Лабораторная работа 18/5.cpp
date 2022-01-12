#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, first;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: " << endl;
        cin >> a[i];
    }
    
    first = a[0];
    
    for (int i = 0; i < n - 1; i++){
        if (first > a[i + 1]){
            a[i] = a[i + 1];
            a[i + 1] = first;
        }
    }
    
    for(int i = 0; i < n; i++) cout << i << " элемент массива = " << a[i] << endl;
    
    return 0;
}

