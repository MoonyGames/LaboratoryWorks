#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите команду для робота: ";
    cin >> n;
    
    switch (n) {
        case 1:
            cout << "Робот направлен на запад (З)";
            break;
        case -1:
            cout << "Робот направлен на восток (В)";
            break;
        case 0:
            cout << "Робот направлен на север (С)";
    }
    
    return 0;
}
