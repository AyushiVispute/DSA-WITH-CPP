//Largest of 2 no 
#include<iostream>
using namespace std;

int main(){
	int a,b;
	
	cout<<"Enter value of a:";
	cin>>a;
	
	cout<<"Enter value of b:";
	cin>>b;
	
	int largest=a>=b?a:b;
	cout<<"largest no is:"<<largest;
	return 0;
}
// output:
// Enter value of a:6
// Enter value of b:3
// largest no is:6

// 2) even or odd
#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"Enter value of a:";
	cin>>num;
	
	bool isEven=num%2==0?true:false;
	cout<<"number is:"<<isEven;
	return 0;
}