#include<iostream>
using namespace std;


int main(){
	int a=10,b=20;
	int *ptr1=&a,*ptr2=&b;
	ptr2=ptr1;
	
	cout<<ptr2<<"\n";
	cout<<ptr1<<"\n";
	cout<<&a<<"\n";
	return 0;
	
}

// output:
// 0x6ffe3c
// 0x6ffe3c
// 0x6ffe3c