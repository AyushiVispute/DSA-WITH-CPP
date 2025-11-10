#include<iostream>
using namespace std;

int main(){
	int a=10;
	int *ptr=&a;
	//option 1(dereferencing variable)
	cout<<ptr<<"\n";
	cout<<*ptr<<"\n";  //it print value of variable by using "*"
	
	//option 2(dereferencing variable)
	*ptr=20;
	cout<<a<<"\n";
	
	return 0;
}


// output:
// 0x6ffe44
// 10
// 20