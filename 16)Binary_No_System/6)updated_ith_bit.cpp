#include <iostream>
using namespace std;

int updateIthBit(int num, int i, int val) {
    num = num & ~(1 << i);     // clear ith bit
    num = num | (val << i);   // set ith bit to val
    return num;
}

int main() {
    int num, i, val;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter ith bit position: ";
    cin >> i;

    cout << "Enter value (0 or 1): ";
    cin >> val;

    cout << "Updated number: " << updateIthBit(num, i, val) << endl;

    return 0;
}

// output:
// Enter a number: 7
// Enter ith bit position: 3
// Enter value (0 or 1): 1
// Updated number: 15