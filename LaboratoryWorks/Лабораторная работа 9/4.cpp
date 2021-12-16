#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cout << "Введите сторону A и сторону B прямоугольника и сторону C квадрата через пробел: ";
    cin >> a >> b >> c;
    
    cout << "На прямоугольнике с площадью A*B может быть размещено " << (a * b) / (c * c) << " квадратов со стороной C" << endl;
    cout << "Оставшаяся незанятая часть равна " << (a * b) % (c * c);
    
    return 0;
}
