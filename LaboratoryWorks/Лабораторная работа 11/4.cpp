#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;
    
    cout << "Введите координаты X и Y точки через пробел: ";
    cin >> x >> y;
    
    if (y > 0){
        if (x > 0) cout << "Точка находится в первой четверти";
        else cout << "Точка находится во второй четверти";
    }
    else{
        if (x < 0) cout << "Точка находится в третьей четверти";
        else cout << "Точка находится в четвертой четверти";
    }
    
    return 0;
}
