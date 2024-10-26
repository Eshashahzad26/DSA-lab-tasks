#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;


void insertAtStart(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    if (head == NULL) {
        head = newNode;
        newNode->next = head; 
        newNode->prev = head; 
    } else {
        Node *last = head->prev;
        newNode->next = head; 
        newNode->prev = last; 
        last->next = newNode; 
        head->prev = newNode; 
        head = newNode; 
    }
}


void insertAtEnd(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    if (head == NULL) {
        head = newNode;
        newNode->next = head; 
        newNode->prev = head; 
    } else {
        Node *last = head->prev; 
        last->next = newNode; 
        newNode->prev = last; 
        newNode->next = head; 
        head->prev = newNode; 
    }
}

void insertAtPosition(int n, int pos) {
    Node *newNode = new Node;
    newNode->data = n;

        if (pos == 1) {
          Node *last = head->prev;
        newNode->next = head; 
        newNode->prev = last; 
        last->next = newNode; 
        head->prev = newNode; 
        head = newNode; 
        }  else {
        Node *temp = head;
for(int i=1;i<pos-1 && temp->next!=head;i++){
            temp = temp->next;
        }
        if(temp->next==head){
        	cout<<"position is invalid"<<endl;
        	return ;
		}
		newNode->next=temp->next;
		newNode->prev=temp;
		temp->next->prev=newNode;
		temp->next=newNode;
	}
}
		
void displayList() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    
    Node *temp = head;
    cout<<"elements "<<endl;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
insertAtStart(2);
insertAtStart(4);
insertAtStart(6);
	    displayList(); 
	cout<<"insertion at end"<<endl;
    insertAtEnd(10);
    displayList(); 
    
    cout<<"insertion at start"<<endl;
    insertAtStart(5);
    displayList(); 
    
    cout<<"insertion at position 2"<<endl;
    insertAtPosition(11, 2		);
    
    displayList(); 
    
    return 0;
}

