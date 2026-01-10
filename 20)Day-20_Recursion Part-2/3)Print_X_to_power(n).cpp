#include <iostream>
#include <string>
#include<vector>
using namespace std;

int pow(int x,int n){
	if(n==0){
		return 1; //base Case
	}
	int halfPower=pow(x,n/2);
	int halfpowerSqu=halfPower*halfPower;
	if(n%2!=0){
		return x * halfpowerSqu;
	}
	return halfpowerSqu;
}

int main(){
	int base;
	int exponent;
	cout<<"Enter base you want:";
	cin>>base;
	cout<<"Enter exponent you want:";
	cin>>exponent;
	
	cout<<"result is:"<<base<<"^"<<exponent<<"="<<pow(base,exponent);
	return 0;
}

// output:
// Enter base you want:2
// Enter exponent you want:10
// result is:2^10=1024