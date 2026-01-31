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
	//push_Front Function
	void push_front(int val){
		Node*newNode=new Node(val); //dynamic allocation
		
		if(head==NULL){
			head=tail=newNode;
		}else{
			newNode->next=head;
			head=newNode;
		}
	}
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
	void insertMiddle(int val,int pos){
		Node*newNode=new Node(val);
		
		Node*temp=head;
		for(int i=0;i<pos-1;i++){
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
	void pop_back(){
		Node*temp=head;
		
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp->next=NULL;
		delete tail;
		tail=temp;
	}
	
};
int main(){
	LinkedList ll;
	ll.push_front(4);
	ll.push_front(3);
	ll.push_front(2);
	ll.push_front(1);
	ll.insertMiddle(100,3);
	cout<<"Before deleting node:";
	ll.printList();
	ll.pop_back();
	cout<<"After deleting node:";
	ll.printList();
	
	return 0;
}

// Output:
// Before deleting node:1->2->3->100->4->NULL
// After deleting node:1->2->3->100->NULL