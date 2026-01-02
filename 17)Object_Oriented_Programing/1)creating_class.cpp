#include <iostream>
using namespace std;

class Student{//creating class
	public:
		int rollNo;
		string name;
		
		void display(){
			cout<<"Roll_No:"<<rollNo<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
   int main(){
   	Student s1;//object
   	
   	s1.rollNo=1;
   	s1.name="Ayushi";
   	
   	s1.display();
   	return 0;
	   
   }

// output:
//    Roll_No:1
//    Name:Ayushi