#include <iostream>
#include <string>
using namespace std;

int Print(int n){
	if(n==1){
		return 1;
	}
	return n+Print(n-1);
	};
int main(){
	cout<<Print(6);
	return 0;
}

// output:21