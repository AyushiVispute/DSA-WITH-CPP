#include <iostream>
#include <string>
using namespace std;

void func(){
	cout<<"Function Call"<<endl;
	func();
};

int main(){
	func();
	return 0;
}

//no base condition 
//occur infinite calling

//output:
//	segmentation fault