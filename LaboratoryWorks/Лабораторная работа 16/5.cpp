#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите размер массива: ";
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива: ";
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i += 2){ //Выводим все нечетные элементы массива в порядке возрастания номеров
        cout << a[i] << endl;
    }
    
    if (n % 2 != 0) n -= 1; //Мы хотим вывести четные элементы от конца до начала, поэтому проверяем - четный ли последний элемент.
                            //Если нет, то берем предыдущий до него - он будет четным
    for (int i = n - 1; i >= 0 ; i -= 2){
        cout << a[i] << endl;
    }
    
    return 0;
}
