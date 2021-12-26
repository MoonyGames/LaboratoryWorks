#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: " << endl;
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
          for (int k = n; k > i; k -= 1){
              if (a[i] == a[k]){
                  if (i < k) cout << "Номера двух одинаковых элементов: " << i + 1 << " и " << k + 1;
                  else cout << "Номера двух одинаковых элементов: " << k + 1 << " и " << i + 1;
              }
         }
      }
    
    return 0;
}
