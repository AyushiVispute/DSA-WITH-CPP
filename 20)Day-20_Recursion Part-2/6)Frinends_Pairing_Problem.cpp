//find total ways in which n friends can be paired up each friend can only ne paired once

#include <iostream>
#include <string>
using namespace std;


int friendPair(int n){
	
	if(n==1 || n==2){
		return n;
	}
	return friendPair(n-1)+(n-1)*friendPair(n-2);
}
int main(){
	cout<<"Total ways of pair:"<<friendPair(4)<<endl;
}

// output:
// Total ways of pair:10