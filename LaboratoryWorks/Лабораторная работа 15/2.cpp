#include <iostream>
#include <math.h>

using namespace std;

int Sign(float x){
    if (x < 0) return -1;
    else if (x > 0) return 1;
    else return 0;
    
    return 0;
}

int main(int argc, const char * argv[]) {
    float a = 1.4, b = -2.5;
    
    cout << Sign(a) + Sign(b);
    
    return 0;
}
