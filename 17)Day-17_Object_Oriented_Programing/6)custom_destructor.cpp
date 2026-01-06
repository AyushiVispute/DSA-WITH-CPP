#include <iostream>
#include <string>
using namespace std;


class car{
	public:
		string color;
		string name;
		int *mileage;
		
	car(string name,string color){
		this->name=name;
		this->color=color;
		mileage=new int;//dynamic  Allocation
		*mileage=12;
	}
	car(car &original){
		cout<<"copying original to new..\n";
		name=original.name;
		color=original.color;
	}
	~car(){
		cout<<"Deleting object...";
		if(mileage!=NULL){
			delete mileage;
			mileage=NULL;
		}
	}
};

int main(){
	car c1("maruti 800","black");
	cout<<c1.name<<endl;//maruti800
	cout<<c1.color<<endl;//black
	cout<<*c1.mileage<<endl;
	return 0;
};
	
// output:
// maruti 800
// black
// 12
// Deleting object...