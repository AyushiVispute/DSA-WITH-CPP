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
	LinkedList li;
	li.push_front(3);// it display 1->2->3 because we added at front 
	li.push_front(2);
	li.push_front(1);
	li.printList();
	return 0;
}

//output: 3->2->1->NULL