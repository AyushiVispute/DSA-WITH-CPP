//print the largest of 2 no

#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	
	if(a>=b){
		cout<<"Largest value in a";
	}
	else{
		cout<<"Largest value in b";
	}
	return 0;
}
// output:
// Enter a:5
// Enter b:3
// Largest value in a

// 2)Print if a number is Odd or even

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter num:";
	cin>>num;
	
	if(num%2==0){
		cout<<"It is even no";
	}
	else{
		cout<<"It is odd no";
	}
	return 0;
}

// output:
// Enter num:5
// It is odd no