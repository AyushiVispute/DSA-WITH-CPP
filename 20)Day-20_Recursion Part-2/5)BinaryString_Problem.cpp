//print all binary string of size N without any consecutive 1's

#include <iostream>
#include <string>
using namespace std;


void binString(int n,int lastPlace,string ans){
	
	if(n==0){
		cout<<ans<<endl;
		return;  //Base case
	}
	if(lastPlace!=1){
		binString(n-1,0,ans+'0');
		binString(n-1,1,ans+'1');
	}  
	else{
		binString(n-1,0,ans+'0');
	}
}
int main(){
	string ans="";
	binString(3,0,ans);
}

// output:
// 000
// 001
// 010
// 100
// 101