#include <iostream>
#include <math.h>

using namespace std;

int PowerA3(int a, int *b){
    *b = a * a * a;
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int numbers[5] = {2, 3, 4, 5, 6};
    int b;
    
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        PowerA3(numbers[i], &b);
        
        cout << b << endl;
    }
    
    return 0;
}
