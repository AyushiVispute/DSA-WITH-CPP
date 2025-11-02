#include<iostream>
using namespace std;

int main(){
	int marks;
	
	cout<<"Enter Marks:";
	cin>>marks;
	
	if(marks>=85){
		cout<<"Grade:A";
	}
	else if(marks>60){
		cout<<"Grade:B";
	}
	else{
		cout<<"Grade:C";
	}
	return 0;
}

// output:
// Enter Marks:80
// Grade:B