//1)Pridict output of cout<<(bool)3+2

#include <iostream>
using namespace std;

int main (){
	cout<<((bool)3+2)<<endl;
   return 0;
}
//output= 3   
// (bool)3=true=1
//1+2=3

//2)Pridict output of cout<<(23.5+2+'A');

int main (){
	cout<<(23.5+2+'A')<<endl;
   return 0;
}
// output: 90.5
//  float is large size of data type 