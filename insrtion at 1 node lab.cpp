#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
void print_data(Node *head){
if(head==nullptr){
	cout<<"Lin list empty:";
}
Node*ptr=head;
while(ptr!=nullptr){
	cout<<ptr->data<<" ";
	ptr=ptr->next;
}
}
Node* at_start(Node*head, int newValue){
	Node* new_node=new Node();
	new_node->data=newValue;
	new_node->next=head;
	head=new_node;
	return head;
}
int main(){
	Node node1,node2,node3,node4; int newValue;
	cout<<"Enter value for Node 1:";
	cin>>node1.data;
	node1.next=&node2;
		cout<<"Enter value for Node 2:";
	cin>>node2.data;
	node2.next=&node3;
		cout<<"Enter value for Node 3:";
	cin>>node1.data;
	node3.next=&node4;
		cout<<"Enter value for Node 4:";
	cin>>node1.data;
	node4.next=NULL;
	cout<<"Enter value for new node to insert atb thr start:";
	cin>>newValue;
	Node head=node1;
	at_start(&head,newValue);
	cout<<"Link list after insertion value at start:";
	print_data(&head);
	return 0;
	
}