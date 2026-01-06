#include <iostream>
#include <string>
using namespace std;


class car{
	public:
		string color;
		string name;
		
	car(string name,string color){
		this->name=name;
		this->color=color;
	}
	car(car &original){
		cout<<"copying original to new..\n";
		name=original.name;
		color=original.color;
	}
};

int main(){
	car c1("maruti 800","black");
	car c2(c1);//custom copy constructor
	cout<<c2.name<<endl;//maruti800
	cout<<c2.color<<endl;//black
	return 0;
};
// output:
// copying original to new..
// maruti 800
// black