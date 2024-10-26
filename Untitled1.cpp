#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	node *n1=new node;
	node *n2= new node;
	node *n3= new node;
	n1->next=n2;
	n2->next=n3;
	n3->next=n1;
	n1->data=7;
	n2->data=6;
	n3->data=13;
	node *head;
	head=n1;
	//traversing in circular
	node *ks;
	ks=head;
	do 
	{
		cout<<ks->data<<" ";
		ks=ks->next;
	}
	while(ks!=head);
	cout<<endl;
	//insertion at start
	node *n4=new node;
	n4->next=head;
	n4->data=11;
	n3->next=n4;
	head=n4;
	cout<<"insertion at start"<<endl;
	node *my;
	my=head;
	do 
	{
		cout<<my->data<<" ";
		my=my->next;
	}
	while(my!=head);
	cout<<endl;}