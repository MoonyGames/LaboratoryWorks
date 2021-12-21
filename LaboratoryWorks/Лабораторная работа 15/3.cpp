#include <iostream>
#include <math.h>

using namespace std;

float RingS(float R1, float R2){
    return R1 > R2 ? M_PI * (R1 * R1 - R2 * R2) : M_PI * (R2 * R2 - R1 * R1);
}

int main(int argc, const char * argv[]) {
    float S1 = RingS(6, 7);
    float S2 = RingS(7, 8);
    float S3 = RingS(9, 10);
    
    cout << S1 << endl << S2 << endl << S3;
    
    return 0;
}
