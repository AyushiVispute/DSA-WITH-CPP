#include<iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	bool isprime=true;
	
	cout<<"Enter the no:";
	cin>>n;
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			isprime=false;
		}
	}
	if(isprime){
		cout<<"no is prime";
	}else{
		cout<<"no is not prime";
	}
	return 0;
}
// output:
// Enter the no:7
// no is prime
// Enter the no:40
// no is not prime