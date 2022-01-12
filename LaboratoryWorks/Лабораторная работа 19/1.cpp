#include <iostream>

using namespace std;

int main (int argc, const char * argv[]) {
    int n, y = 0;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    int answer[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: " << endl;
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) if (a[i] != a[i + 1]) answer[y++] = a[i];
    
    for (int i = 0; i < y; i++) cout << answer[i];
    
    return 0;
}
