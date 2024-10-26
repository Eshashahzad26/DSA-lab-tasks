#include <iostream>
using namespace std;
int main(){
	struct node{
		int data;
		node *next;
	};
	
	node *n1=new node;
	node *n2=new node;
	node *n3=new node;
	node *n4=new node;
	
	n1->data=10;
	n2->data=20;
	n3->data=50;
	n4->data=60;
	
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	node *head;
	head=n1;
	node *i;
	i=head;
	while(i!=NULL){
		cout<<i->data<<endl;
		i=i->next;
	}
	cout<<endl;
	int value;
	cout<<"entre the value you want to delete";
	cin>>value;
	 node *pre;
	 pre=NULL;
	 node *n;
	 n=head;
	 while(n->data!=value){
	 	pre=n;
	 	n=n->next;
		 }
	 	pre->next=n->next;
	 	delete(n);
	 	
	 	node *j;
	 	j=head;
	 	while(j!=NULL)
	 	{
	 		cout<<j->data<<endl;
	 		j=j->next;
		 }
	 }
