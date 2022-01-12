#include <iostream> // Moony.Studio

using namespace std;

int main (int argc, const char * argv[]) {
    int n, max, min, maxIndex, minIndex, k = 0;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: ";
        cin >> a[i];
    }
    
    max = a[0];
    min = a[0];
    
    for (int i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
            maxIndex = i;
        }
        
        if (a[i] < min){
            min = a[i];
            minIndex = i;
        }
    }
    
    if (minIndex == 0) minIndex++;
    
    int n2 = n + 2;
    int answer[n2];
    
    for (int i = 0; i < n2; i++){
        if (i == maxIndex + 1){
            answer[i] = 0;
            k++;
        }
        else if (i == minIndex - 1){
            answer[i] = 0;
            k++;
        }
        else answer[i] = a[i - k];
    }
    
    for (int i = 0; i < n2; i++){
        cout << i << " элемент массива: " << answer[i] << endl;
    }
    
    return 0;
}
