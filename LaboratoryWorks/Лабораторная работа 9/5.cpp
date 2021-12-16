#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int year;
    
    cout << "Введите год: ";
    cin >> year;
    
    cout << "Это " << year / 100 + 1 << " век";
    
    return 0;
}
