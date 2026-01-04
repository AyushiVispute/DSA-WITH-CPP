#include <iostream>
#include <string>
using namespace std;


class Animal{
	public:
	void eat(){
		cout<<"Eating\n";
	}
};
	
class Bird:public Animal {
    public:
     void fly(){
     	cout<<"Bird can fly\n";
    }
};
	
class fish: public Animal{
	public:
	void swim(){
		cout<<"fish can Swim\n";
	}
};

class mammal:public Animal{
	public:
		void walk(){
			cout<<"mammal can walk\n";
		}
};
int main(){
	Bird b;
	fish f;
	mammal m;
	
	b.fly();
    b.eat();

    f.swim();
    f.eat();

    m.walk();
    m.eat();
    
    return 0;
};
	