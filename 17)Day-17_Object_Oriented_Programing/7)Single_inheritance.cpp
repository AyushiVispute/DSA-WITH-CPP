#include <iostream>
#include <string>
using namespace std;


class Animal{
	public:
		string color;
	void eat(){
		cout<<"eats\n";
	}
	void breathe(){
		cout<<"Breathe";
	}
};
class fish: public Animal{
    public:
    	int fins;
    	
    	void swim(){
    		eat();
    		cout<<"swims\n";
		}
	};

	int main(){
		fish f1;
		f1.eat();
		f1.swim();
		f1.breathe();
		return 0;
};
// output:
// eats
// eats
// swims
// Breathe	