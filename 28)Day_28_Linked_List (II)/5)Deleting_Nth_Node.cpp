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
	
	//deleting Nth node form end
	int getsize(){
		int sz=0;
		Node*temp=head;
		
		while(temp!=NULL){
			temp=temp->next;
			sz++;
		}	return sz;
	}
	void removeNth(int n){
		int size=getsize();
		Node*prev=head;
		
		for(int i=1;i<(size-n);i++){
			prev=prev->next;
		}
		Node*toDe=prev->next;
		cout<<"Going to delete :"<<toDe->data<<endl;
		
		prev->next=prev->next->next;
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
	ll.removeNth(2);
	ll.printList();
	
	
	
	return 0;
}

// output:
// Before LinkedList:4->3->2->1->NULL
// Going to delete :2
// 4->3->1->NULL