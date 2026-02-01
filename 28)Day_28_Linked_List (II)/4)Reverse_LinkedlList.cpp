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
	//Reverse of linkedList
	void reverse(){
		Node*curr=head;
		Node*prev=NULL;
		
		while(curr!=NULL){
			Node*next=curr->next;
			curr->next=prev;
			
			prev=curr;
			curr=next;
		}
		head=prev;
		  
	}
};
int main(){
	LinkedList ll;
	ll.push_back(4);
	ll.push_back(3);
	ll.push_back(2);
	ll.push_back(1);
	cout<<"Before LinkedList:";
	ll.printList();
	ll.reverse();
	cout<<"After reverse:";
	ll.printList();
	
	
	
	return 0;
}

//output:
// Before LinkedList:4->3->2->1->NULL
// After reverse:1->2->3->4->NULL