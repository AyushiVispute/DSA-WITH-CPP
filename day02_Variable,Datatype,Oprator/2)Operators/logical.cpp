#include <iostream>
using namespace std;

int main() {
    int a = 5, b = -3;

    cout << (a > 0 && b > 0) << endl; // false (0) 
    cout << (a > 0 || b > 0) << endl; // true (1) 
    cout << !(a > 0) << endl;         // false (0) 

    return 0;
}


