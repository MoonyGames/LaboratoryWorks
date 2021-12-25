#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, maximum;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: " << endl;
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        if (i == 0 & a[i] > a[i + 1]) maximum = i;
        else if (i == n - 1 & a[i] > a[i - 1]) maximum = i;
        else{
            if (a[i] > a[i - 1] & a[i] > a[i + 1]) maximum = i;
        }
    }
    
    cout << "Номер последнего локального максимума: " << maximum+ 1;
    
    return 0;
}
