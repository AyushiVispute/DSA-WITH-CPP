#include <iostream>
#include <string>
using namespace std;


class Animal{
	public:
	void eat(){
		cout<<"eats\n";
	}
	void breathe(){
		cout<<"Breathe\n";
	}
};
class Mammal: public Animal{
    public:
      string bloodType;
      
      Mammal(){
      	bloodType="warm\n";
	  }
	};
	
class dog:public Mammal{
	public:
		void tailwag(){
			cout<<"a Dog wags tail\n";
		}
};

	int main(){
		dog d1;
		d1.tailwag();
		d1.eat();
		d1.breathe();
		cout<<d1.bloodType<<endl;
	
		return 0;
};
	
// output:
// a Dog wags tail
// eats
// Breathe
// warm