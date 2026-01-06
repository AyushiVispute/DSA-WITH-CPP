#include <iostream>
#include <string>
using namespace std;

class A{
	string keptSecret="This is secret data";
	friend class B;
};
class B{//friend function
	public:
	void show(A &obj){
		cout<<obj.keptSecret<<endl;
	}
};
int main(){
	A a1;
	B b1;
	b1.show(a1);
	return 0;
}

// output:
// This is secret data