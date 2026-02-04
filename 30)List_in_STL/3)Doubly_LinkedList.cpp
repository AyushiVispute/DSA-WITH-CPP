#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int val){
	data=val;
	prev=next=NULL;
	}
};
class DoubleList{
	public:
		Node*head;
		Node*tail;
		
		DoubleList(){
			head=tail=NULL;
		}
	void push_front(int val){
		Node*newNode=new Node(val);
		
		if(head==NULL){
			head=tail=newNode;
		}else{
			tail->next=newNode;
			newNode->prev=tail;
			tail=newNode;
		}
	}
	void pop_front(){
		Node*temp=head;
		if(head==NULL){
	 		head->prev=NULL;
		}else{
	 	head=head->next;
	 	head->prev=NULL;
	 	temp->next=NULL;
	 	delete temp;
		}
	}
	void printList(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"<=>";
			temp=temp->next;
		}
		cout<<"NULL\n";
	}
};
int main(){
	DoubleList ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
	ll.push_front(4);
	ll.push_front(5);
	ll.printList();
	ll.pop_front();
	
	cout<<"After delete:";
	ll.printList();
	return 0;
}
	
// 1<=>2<=>3<=>4<=>5<=>NULL
// After delete:2<=>3<=>4<=>5<=>NULL