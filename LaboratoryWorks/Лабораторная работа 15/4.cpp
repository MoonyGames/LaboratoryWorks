#include <iostream>
#include <math.h>

using namespace std;

int Quarter(int x, int y) {
    if (y > 0){
        if (x > 0) return 1;
        else return 2;
    }
    else{
        if (x < 0) return 3;
        else return 4;
    }
    
    return 0;
}


int main(int argc, const char * argv[]) {
    cout << Quarter(3, 4) << endl << Quarter(-2, 5) << endl << Quarter(-10, -14);
    
    return 0;
}
