#include <iostream>
#include <math.h>

using namespace std;

class number{
public:
    int number;
    
    bool even;
    int digits;
    
    void getNumber(){
        cout << "Введите число: ";
        cin >> number;
        
        evenOrOdd();
        twoOrThreeDigits();
    }
    
private:
    void evenOrOdd(){
        even = number % 2 == 0 ? true : false;
    }
    
    void twoOrThreeDigits(){
        if (number / 100 > 0) digits = 3;
        else if (100 - number > 0) digits = 2;
        else digits = 3;
    }
};

int main(int argc, const char * argv[]) {
    number number;
    number.getNumber();
    
    switch (number.digits){
        case 1:
            cout << "Однозначное ";
            break;
        case 2:
            cout << "Двузначное ";
            break;
        case 3:
            cout << "Трехзначное ";
            break;
    }
    
    if(number.even) cout << "четное число";
    else cout << "нечетное число";
    
    return 0;
}
