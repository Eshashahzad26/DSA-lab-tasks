#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node *pre;
	
	Node(int val){
		this->data=val;
		this->next=NULL;
		this->pre=NULL;
	}
};

void insertAtHead(Node* &head, int val){
	
	Node *newNode=new Node(val);
	
	if(head==NULL){
		head=newNode;
		return;
	}
	
	head->pre=newNode;
	newNode->next=head;
	head=newNode;
}

void insertAtTail(Node*&head, int val){
	Node *newNode=new Node(val);
	
	if(head==NULL){
		head=newNode;
		return;
	}
	
	Node *last=head;
	while(last->next!=NULL){
		last=last->next;
	}
	
	last->next=newNode;
	newNode->pre=last;
}


void display(Node* &head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	
	Node* head=NULL;
	int value;
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	
	cout<<"Elements in node are: \n";
	display(head);
	
	cout<<"\nEnter element you want to insert at start: ";
	cin>>value;
	insertAtHead(head,value);
	
	
	cout<<"\nEnter element you want to insert at end: ";
	cin>>value;
	insertAtTail(head,value);
	
	cout<<"\nElements in node are: \n";
	display(head);

}