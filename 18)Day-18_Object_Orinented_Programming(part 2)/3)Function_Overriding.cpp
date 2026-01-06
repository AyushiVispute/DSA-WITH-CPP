#include <iostream>
#include <string>
using namespace std;

class parent{
	public:
		void show(){
			cout<<"Parent Show Function";
		}
};
class child :public parent{
	public:
		void show(){
		cout<<"Child show Function";
		}
};
int main(){
	child c1;
	c1.show();
	return 0;
}

// output:
// Child show Function