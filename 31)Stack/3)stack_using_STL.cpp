#include <iostream>
#include<vector>
#include<stack>

using namespace std;


int main(){
	stack<char> s;
	
	s.push('T');
	s.push('A');
	s.push('C');
	
	while(!s.empty()){
		cout<<s.top()<<"";
		s.pop();
	}
	return 0;
}