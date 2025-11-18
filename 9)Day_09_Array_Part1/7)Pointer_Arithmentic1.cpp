
#include<iostream>
using namespace std;

int main(){
	int a=5;
	int *ptr=&a;
	
	cout<<"before pointer increament:"<<ptr<<"\n";
	ptr++;
	cout<<"after pointer increament:"<<ptr<<"\n";
	ptr--;
	cout<<"after pointer decreament:"<<ptr<<"\n";
	return 0;
}


// output:before pointer increament:0x6ffe44
// after pointer increament:0x6ffe48
// after pointer decreament:0x6ffe44