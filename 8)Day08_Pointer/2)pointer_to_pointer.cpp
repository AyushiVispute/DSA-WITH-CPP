#include<iostream>
using namespace std;

int main(){
	int a=23;
	int *ptr=&a;
	
	cout<<"address of:"<< &a<<"="<<ptr<<"\n";
	//pointer to pointer 
	int **pptr=&ptr;
	cout<<"address of pointer to pointer variable is:"<< &ptr<<"="<<pptr<<"\n";
	return 0;
}
// output:
// address of:0x6ffe34=0x6ffe34
// address of pointer to pointer variable is:0x6ffe28=0x6ffe28