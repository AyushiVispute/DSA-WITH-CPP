#include <iostream>
using namespace std;

void clearIBits(int num, int i) {
    int bitMask = (~0) << i;     
    num=num & bitMask ;  
    cout << "Updated number: " << num << endl;
}

int main() {
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter ith bit position: ";
    cin >> i;

     clearIBits(num, i);

    return 0;
}

// output:
// Enter a number: 15
// Enter ith bit position: 2
// Updated number: 12