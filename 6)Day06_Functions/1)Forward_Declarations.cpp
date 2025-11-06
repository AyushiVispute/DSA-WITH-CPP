#include<iostream>
using namespace std;

void sayhello();//forward declare

int main(){
	sayhello();
	return 0;
}
	
void sayhello(){
	cout<<"Hello,Good Morning!";
}

// output:
// Hello,Good Morning!
