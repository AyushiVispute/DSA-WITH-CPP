#include <iostream>
using namespace std;

int main (){
	int a,b;
	
	cout<<"Enter a:";
	cin>>a;
	
	cout<<"Enter b:";
	cin>>b;
	
	int sum=a+b;
    int sub=a-b;
    int prod=a*b;
	cout<<"Addition:"<<sum<<endl;
    cout<<"Substraction:"<<sub<<endl;
    cout<<"Multiplication:"<<prod<<endl;
	
   return 0;
}
// output:
//  Enter a:4
//  Enter b:5
//  Addition:9