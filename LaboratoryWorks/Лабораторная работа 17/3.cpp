#include <iostream>
#include <math.h>
#include <list>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    list <int> a1;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: ";
        cin >> a[i];
    }
    
    if (n % 2 == 0) n /= 2;
    else n = (n / 2) - 1;
    
    for (int i = 1; i < n; i += 2){
        a1.push_back(a[i]);
    }
    
    a1.sort();
    
    cout << "Наименьший элемент с четным номером: " << a1.front();
    
    return 0;
}
