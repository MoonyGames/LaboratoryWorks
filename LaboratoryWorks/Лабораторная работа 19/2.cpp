#include <iostream>

using namespace std;

int main (int argc, const char * argv[]) {
    int n;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: ";
        cin >> a[i];
    }
 
    int y, j, k, num;
    
    for (int i = 0; i < n; i++){
        num = 0;
        
        for (j = 0; j < n; j++) if (a[i] == a[j]) num++;
 
        if (num == 2){
            k = i - 1;
            y = a[i];
            
            for (j = i; j < n; j++){
                if (a[j] != y){
                    k++;
                    a[k] = a[j];
                }
            }
            
            n = k + 1;
            i--;
        }
    }
 
    cout << "Получившийся размер массива: " << n << endl;
    for (int i = 0; i < n; i++) cout << i << " элемент массива: " << a[i] << endl;
 
    return 0;
}

