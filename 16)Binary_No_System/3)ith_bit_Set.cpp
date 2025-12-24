// set bit to ith position 1->1
//                         0->1

#include <iostream>
using namespace std;

int setIthBit(int num, int i) {
    int subMask = 1 << i;
    return (num | subMask);
}
int main() {
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter ith position to set: ";
    cin >> i;

    cout<<setIthBit(num, i)<<endl;
    

    return 0;
}

// output:
// Enter a number: 6
// Enter ith position to set: 3
// 14