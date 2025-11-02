// print the largest no 3 number
#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter value of a:";
	cin>>a;
	
	cout<<"Enter value of b:";
	cin>>b;
	
	cout<<"Enter value of c:";
	cin>>c;
	
	if(a>=b && a>=c){
		cout<<"largest no is :"<<a;
    }
	else if(b>=a && b>=c){
		cout<<"largest no is :"<<b;
	}
	else{
		cout<<"largest no is :"<<c;
	}
	return 0;
}

// output:
// Enter value of a:5
// Enter value of b:4
// Enter value of c:9
// largest no is :9