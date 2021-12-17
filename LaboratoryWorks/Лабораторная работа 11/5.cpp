#include <iostream>
#include <math.h>

using namespace std;

class number{
public:
    int number;
    
    bool even;
    bool positive;
    bool nullNumber;
    
    void getNumber(){
        cout << "Введите число: ";
        cin >> number;
        
        evenOrOdd();
        positiveOrNegative();
    }
    
private:
    void evenOrOdd(){
        even = number % 2 == 0 ? true : false;
    }
    
    void positiveOrNegative(){
        if (number > 0) positive = true;
        else if (number < 0) positive = false;
        else nullNumber = true;
    }
};

int main(int argc, const char * argv[]) {
    number number;
    number.getNumber();
    
    if(number.nullNumber == true){
        cout << "Нулевое число";
        
        return 0;
    }
    
    if(number.positive) cout << "Положительное ";
    else cout << "Отрицательное ";
    
    if(number.even) cout << "четное число";
    else cout << "нечетное число";
    
    return 0;
}
