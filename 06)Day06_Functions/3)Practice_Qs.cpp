//WAP to find the product of 2 no =a & b

#include<iostream>
using namespace std;

int multiplication(int a,int b){
	int prod=a*b;
	return prod;
}

int main(){
	int p=multiplication(2,3);
	cout<<"product of val is:"<<p;
    return 0;
}

//WAP to print if a number is odd or even

#include<iostream>
using namespace std;

int oddEven(int n){
	if(n%2==0){
		cout<<"No is even";
	}else{
		cout<<"No is odd";
	}
}

int main(){
	oddEven(4);
    return 0;
}
// output:No is even