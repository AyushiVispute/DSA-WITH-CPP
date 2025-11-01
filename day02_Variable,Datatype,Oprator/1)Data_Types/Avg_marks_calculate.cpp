#include <iostream>
using namespace std;

int main (){
	int math,science,marathi,hindi;
	
	cout<<" marks of math:";
	cin>>math;
	
	cout<<" marks of marathi:";
	cin>>marathi;
	
	cout<<" marks of science:";
	cin>>science;
	
	cout<<" marks of hindi:";
	cin>>hindi;
	
	int marks= (math+marathi+hindi+science)/4;
	cout<<"Average Marks:"<<marks<<"%"<<endl;
	
   return 0;
}

// output:
//  marks of math:90
//  marks of marathi:80
//  marks of science:70
//  marks of hindi:80
// Average Marks:80%