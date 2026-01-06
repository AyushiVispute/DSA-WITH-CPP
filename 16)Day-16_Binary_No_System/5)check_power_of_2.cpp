#include <iostream>
using namespace std;

bool isPowerOf2(int num) {
   if (!(num & (num-1))){
   	return true;
   }else{
   	return false;
   }
}

int main() {
    int num;

    cout << "Enter a number to check if it is power of 2: ";
    cin >> num;

    cout << isPowerOf2(num) << endl;

    return 0;
}

// output:
// Enter a number to check if it is power of 2: 8
// 1