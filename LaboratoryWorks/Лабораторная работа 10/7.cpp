#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cout << "Введите числа A, B и С через пробел: ";
    cin >> a >> b >> c;
    
    int catets[3] = {a, b, c};
    sort(begin(catets), end(catets));
    
    pow(catets[2], 2) == pow(catets[0], 2) + pow(catets[1], 2) ? cout << "Треугольник с катетами A, B и C прямоугольный" : cout << "Треугольник с катетами A, B и C не прямоугольный";
    
    return 0;
}
