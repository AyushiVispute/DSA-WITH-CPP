#include <iostream>
#include <string>
using namespace std;

class parent{
	public:
		void show(){
			cout<<"Parent Show Function";
		}
		virtual void hello(){
			cout<<"parent hello\n";
		}
};
class child :public parent{
	public:
		void show(){
		cout<<"Child show Function";
		}
		void hello(){
			cout<<"child hello\n";
		}
};
int main(){
	child c1;
	parent *ptr;
	ptr=&c1; //runtime binding
	ptr->hello(); //virtual finction call which always prefer child first then follow inheritance 
	return 0;
}

// output:
// child hello