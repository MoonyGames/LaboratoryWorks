#include <iostream>

using namespace std; //Подключили пространство имен std, чтобы не писать std каждый раз уточнение при использовании функции из библиотеки

int main(int argc, const char * argv[]) {
    float a, b; //Создали две переменные типа float, указывающих длину (a) и ширину (b) прямоугольника
    cin >> a >> b; //Вводим данные в переменные
    
    cout << "P = " << 2 * (a + b) << " S = " << a * b << endl; //Считаем периметр и площадь и выводим
    
    return 0;
}