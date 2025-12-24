// hint:clear bit means 1->0
//                     0->0

#include <iostream>
using namespace std;

int clearIthBit(int num, int i) {
    int subMask = (~(1 << i));
    return (num & subMask);
}
int main() {
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter ith position to clear: ";
    cin >> i;

    cout<<clearIthBit(num, i)<<endl;
    

    return 0;
}

// output:
// Enter a number: 6
// Enter ith position to clear: 1
// 4