#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cout << "Введите три точки через пробел: ";
    cin >> a >> b >> c;
    
    if (abs(a - b) < abs(a - c)) cout << "Точка B ближе к А, а расстояние между ними равно: " << abs(a - b);
    else cout << "Точка C ближе к А, а расстояние между ними равно: " << abs(a - c);
    
    return 0;
}
