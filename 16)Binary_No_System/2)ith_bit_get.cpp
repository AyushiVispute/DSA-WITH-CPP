#include <iostream>
using namespace std;

int getIthBit(int num, int i) {
    int subMask = 1 << i;

    if (num & subMask) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter ith position to check: ";
    cin >> i;

    int bit = getIthBit(num, i);
    cout << "The bit at position " << i << " is: " << bit << endl;

    return 0;
}

// output:
// Enter a number: 5
// Enter ith position to check: 2
// The bit at position 2 is: 1