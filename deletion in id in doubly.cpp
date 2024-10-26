#include <iostream>
using namespace std;
class node
{
	public:
		node *pre;
		int data;
		node *next;
		
	node()
	{
		this->pre=NULL;
		this->next=NULL;
		this->data=0;
		}	
};

class doubly
{
	public:
	node *head;
		
doubly()
	{
	head=0;
		}	


void traverse(){
	node *i;
	i=head;
	
while(i!=NULL){
	cout<<i->data<<endl;
	i=i->next;
}

}
//insert at start
void addAtStart(int data)
{
	node *temp=new node;
	temp->data=data;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp->next=head;
		temp->pre=NULL;
		head->pre=temp;
		head=temp;
	}
}
//insert at end
 void addAtEnd(int data)
  {
    node *temp=new node; 
    temp->data=data;
    temp->next=NULL;

  if(head==NULL)
   {
     head=temp;
   } 
  else 
    {
    node *j=head; 
    while (j->next!=NULL) 
   { 
      j=j->next;
   }
     temp->pre=j;
      j->next=temp; 
	   
 }
}
    
// insert at mid
   void addAtMid(int position,int data)
{
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{
		
		head=temp;
	}
	else
	{
		node *k;
		while(k->data!=position)
		{
			k=k->next;
		}
		
		temp->pre=k;
		temp->next=k->next;
		k->next->pre=temp;
		k->next=temp;
	}
}
void deletep(int p){
	if(head==NULL){
		cout<<"List is empty \n";
		return;
	}
	node* tep=head;
	if(pos==1){
		head=head->next;
	}
	if(head!=NULL){
		head-.prv=NULL;
	}
	delete tep;
	return;
}
for(int i=0;i<pos&&temp!=NULL){
	temp = temp->next;
}
if(temp==NULL){
	cout<<"Position "<<pos<<"does not exist";
	return;
}
if(temp->next!=NULL){
	temp->next->prv = temp->prv;
	if(temp)
}
};
int main(){
doubly d1;
d1.addAtStart(12);
d1.addAtEnd(13);
d1.addAtMid(12,14);
d1.traverse();
return 0;
}