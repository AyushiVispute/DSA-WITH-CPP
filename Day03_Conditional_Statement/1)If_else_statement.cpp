#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter The Marks:";
	cin>>marks;
	
	if(marks>30){
		cout<<"congrats you are Passed!";
	}
	else{
		cout<<"your failed!!";
	}
	return 0;
}

// output:
// Enter The Marks:90
// congrats you are Passed!