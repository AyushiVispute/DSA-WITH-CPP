#include <iostream>
#include<vector>
using namespace std;

template<class T>
class stack{
vector<T>vec;
public:
	void push(T val){
		vec.push_back(val);
	}
	void pop(){
		if(isEmpty()){
			cout<<"stack is empty\n";
			return;
		}
		vec.pop_back();
	}
	T top(){
		int lastidx=vec.size()-1;
		return vec[lastidx];
	}
	bool isEmpty(){
		return vec.size()==0;
	}
};

int main(){
	stack<char> s;
	
	s.push('T');
	s.push('A');
	s.push('C');
	
	while(!s.isEmpty()){
		cout<<s.top()<<"";
		s.pop();
	}
	return 0;
}

// output:CAT