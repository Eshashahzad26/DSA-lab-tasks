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

void deleteAtStart(Node* &head){
	if(head==NULL){
		cout<<"Empty List";
		return;
	}
	
	Node*temp=head;
	head=temp->next;
	head->pre=NULL;
	delete temp;
}

void deleteAtEnd(Node* &head){
	if(head==NULL){
		cout<<"Empty List";
		return;
	}
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->pre->next=NULL;
	delete temp;
	
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
	cout<<endl;
	
	deleteAtStart(head);
	
	deleteAtEnd(head);
	
		cout<<"\nElements in node are: \n";
	display(head);
	
}