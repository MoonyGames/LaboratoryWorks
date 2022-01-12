#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, min, max, minIndex, maxIndex;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: " << endl;
        cin >> a[i];
    }
    
    min = a[0];
    max = a[0];
    
    for (int i = 0; i < n; ++i){
        if (a[i] > max){
            max = a[i];
            maxIndex = i;
        }
    }
    
    for (int i = 0; i < n; ++i){
        if (a[i] < min){
            min = a[i];
            minIndex = i;
        }
    }
    
    if (minIndex < maxIndex) for (int i = minIndex + 1; i < maxIndex; i++) a[i] = 0;
    else for (int i = maxIndex + 1; i < minIndex; i++) a[i] = 0;
    
    for(int i = 0; i < n; i++) cout << i << " элемент массива = " << a[i] << endl;
}
