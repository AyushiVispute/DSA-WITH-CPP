#include <iostream>
#include <string>
using namespace std;


class print{
	public:
	void show(int x){
		cout<<"int="<<x<<endl;
	}	
	void show(string x){
		cout<<"String="<<x<<endl;
	}
	
};
 int main(){
 	print p1;
 	p1.show(25);
 	p1.show("Ayushi");
 	return 0;
 }

//  output:
// int=25
// String=Ayushi