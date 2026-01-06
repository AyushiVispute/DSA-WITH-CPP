#include <iostream>
#include <string>
using namespace std;

void Print(int n){
	if(n==0){ //Base condition
		return;
	}
	cout<<n; //faith
	Print(n-1); //trust to next call
}
int main(){
	Print(5);
	return 0;
}

// output:
// 54321