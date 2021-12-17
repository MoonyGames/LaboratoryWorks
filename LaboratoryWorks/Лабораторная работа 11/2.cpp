#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cout << "Введите три числа через пробел: ";
    cin >> a >> b >> c;
    
    int numbers[3] = {a, b, c};
    sort(begin(numbers), end(numbers));
    
    cout << "Сумма двух наибольших чисел равна: " << numbers[1] + numbers[2];
    
    return 0;
}
