#include <iostream>
#include <list>

using namespace std;

int main (int argc, const char * argv[]) {
    list <int> index;
    int n, k = 0;
    
    cout << "Введите размер массива: ";
    cin >> n;
  
    for (int i = 0; i < n; i++){
        cout << "Введите " << i << " элемент массива A: ";
        cin >> k;
        index.push_back(k);
        if (k < 0) index.push_back(0);
    }
    
    int result[index.size()];
    k = 0;
    for (int const &i: index) {
        result[k++] = i;
    }
 
    for (int const &i: result) {
        std::cout << i << ' ';
    }
 
    return 0;
}
