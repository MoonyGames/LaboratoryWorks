#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int limits[2];
    float sum = 0.0f;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: " << endl;
        cin >> a[i];
    }
    
    cout << "Введите числа K и L через пробел: " << endl;
    cin >> limits[0] >> limits[1];
    
    sort(begin(limits), end(limits));
    
    for (int i = limits[0] - 1; i < limits[1]; i++){
        sum += a[i];
    }
    
    cout << "Среднее арифметическое элементов массива с K по L включительно: " << sum / (a[1] - a[0] + 1);
    
    return 0;
}
