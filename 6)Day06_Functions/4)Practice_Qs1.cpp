//WAF to calculate Factorial

#include<iostream>
using namespace std;

int factorial(int n){
	
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"Factorial of ("<<n<<")="<<fact<<endl;
	return fact;
	
}
	int main(){
    int n;		
	cout<<"Enter a number:";
	cin>>n;
	factorial(n);
    return 0;
}

// output:
// Enter a number:7
// Factorial of (7)=5040