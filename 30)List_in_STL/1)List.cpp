#include <iostream>
#include<list>
using namespace std;

void printList(list<int>li){
	list<int>::iterator itr;
	for(itr=li.begin();itr!=li.end();itr++){
		cout<<(*itr)<<"->";
	}
	cout<<"NULL"<<endl;
}
int main(){
	list<int>li;
	
	li.push_front(2);
	li.push_front(1);
	li.push_back(3);
	li.push_back(4);
	printList(li);
	
	return 0;
}

// output:1->2->3->4->NULL