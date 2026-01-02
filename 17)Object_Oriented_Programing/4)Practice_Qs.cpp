// Create a User class with properties : id (private), username (public) & password (private).
// Its id should be initialized in a parameterised constructor.
// It should have a Getter & Setter for password.

#include <iostream>
#include <string>
using namespace std;

class User{//creating class
  int id;
  string password;
  public:
  string username;
  
  	User(int id ){//constructor
  		this->id=id;
}
  //setters
  void setPassword(string password){
  	this->password=password;
  }
  //getter
  string getPassword(){
  	return password;
  }
  
};
   int main(){
   	User u1(101);
   	u1.username="Ayushi";
   	u1.setPassword("abcd");
   	
   	cout<<"username:"<<u1.username<<endl;
   	cout<<"password:"<<u1.getPassword()<<endl;
   return 0;
};

// output:
// username:Ayushi
// password:abcd