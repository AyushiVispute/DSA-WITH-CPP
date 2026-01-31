#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node*next;
	
	Node(int val){
		data=val;
		next=NULL;
	}
};
class LinkedList{
	public:
	Node*head;
	Node*tail;
	
	LinkedList(){
		head=NULL;
		tail=NULL;
	}
    //push_back_function
	void push_back(int val){
		Node*newNode= new Node(val);
		
		if(head==NULL){
			head=tail=newNode;
		}else{
			tail->next=newNode;
			tail=newNode;
		}
	}
    void printList(){
		Node*temp=head;
		
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL\n";
	}
};
int main(){
	LinkedList ll;
	ll.push_back(1);
	ll.push_back(2);
	ll.push_back(3);
	ll.printList();
	
	return 0;
}
   // output: 1->2->3->NULL