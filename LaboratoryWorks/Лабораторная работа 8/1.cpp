#include <iostream>
#include <math.h>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    int weight;
    
    cout << "Введите размер файла в байтах: ";
    cin >> weight;
    
    cout << "Размер файла в килобайтах: " << weight / 1024;
    
    return 0;
}
