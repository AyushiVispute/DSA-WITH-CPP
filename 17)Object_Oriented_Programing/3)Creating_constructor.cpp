#include <iostream>
#include <string>
using namespace std;

class car{//creating class
  string name;
  string color;
  
  public:
  	car(string name,string color ){//constructor
  		this->name=name;
  		this->color=color;
}
  //setters
  void start(){
  	cout<<"car has started/n";
  }
  void stop(){
  	cout<<"car has stopped";
  }
  string getName(){
  	return name;
  }
  
  
};
   int main(){
   	car c1("maruti,800","white");
   	cout<<"car name:"<<c1.getName()<<endl;
   return 0;
};

// output:
// car name:maruti,800