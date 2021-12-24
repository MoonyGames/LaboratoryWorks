#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, count = 0;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: " << endl;
        cin >> a[i];
    }
    
    for (int i = 1; i < n - 1; i++) if(a[i + 1] - a[i] == a[i] - a[i - 1]) count++;
    
    if (count + 2 == n) cout << "Разность прогрессии: " << a[1] - a[0];
    else cout << "0";
    
    return 0;
}
