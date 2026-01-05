#include <iostream>
#include <string>
using namespace std;

class Complex{
	public:
		int real;
		int img;
	Complex(int r,int i ){
		real=r;
		img=i;
	}
	void show(){
		cout<<real<<"+"<<img<<"i"<<endl;
	}
//	opeator overloading
	void operator +(Complex &c2){
		int realresult= this->real + c2.real;
		int imgresult= this->img + c2.img;   //(this->img)means c1
		Complex c3(realresult,imgresult);
		cout<<"res=";
		c3.show();
	}
	
};
int main(){
	Complex c1(1,2);
	Complex c2(3,4);
	
	c1.show();
	c2.show();
	
	c1+c2;
	return 0;
}

// output:
// 1+2i
// 3+4i
// res=4+6i