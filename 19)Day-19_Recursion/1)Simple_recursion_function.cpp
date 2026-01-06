#include <iostream>
#include <string>
using namespace std;

int factorial(int n){
	if(n==0){ //Base condition
		return 1;
	}
	
	return n* factorial(n-1);  //recursion
}
int main(){
	cout<<"Factorial is:"<<factorial(4);
	return 0;
}

// output:
// Factorial is:24
