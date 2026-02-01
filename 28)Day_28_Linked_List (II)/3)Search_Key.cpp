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
	//Search Key function
	int searchKey(int key){
		Node*temp=head;
		int idx=0;
		
		while(temp!=NULL){
			if(temp->data==key){
				return idx;
			}
			temp=temp->next;
			idx++;
		} return -1;
	}
	
};
int main(){
	LinkedList ll;
	ll.push_back(4);
	ll.push_back(3);
	ll.push_back(2);
	ll.push_back(1);
	ll.printList();
	cout<<ll.searchKey(2);
	
	return 0;
}


// output:
// 4->3->2->1->NULL
// 2