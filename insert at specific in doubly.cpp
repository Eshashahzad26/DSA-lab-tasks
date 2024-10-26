#include <iostream>
using namespace std;
struct Node {
 int data;
 Node* prev;
 Node* next;
};
Node*head=NULL;
void insert(int n) {
 Node* newNode = new Node;
 newNode->data =n;
 newNode->prev =NULL;
 newNode->next =head;
 if (head != NULL) {
 head->prev = newNode;
 }
 head=newNode;
}
void insertAtPosition(int n, int p) {
 Node* newNode = new Node;
 newNode->data = n;
 if (p == 1) {
 newNode->next = head;
 newNode->prev = NULL;
 if (head != NULL) {
 head->prev = newNode;
 }
 head=newNode;
 return;
 }
 Node* temp = head;
 for (int i=1; i< p-1 &&temp!= NULL;i++) {
 temp = temp->next;
 }
 if (temp==NULL) {
 cout << "Invalid position" << endl;
 delete newNode;
 return;
 }
 newNode->next = temp->next;
 newNode->prev = temp;
 if (temp->next != NULL) {
 temp->next->prev = newNode;
 }
 temp->next=newNode;
}
void print() {
 Node* temp = head;
 cout << "Elements in the doubly linked list are: ";
 while (temp != NULL) {
 cout << temp->data << " ";
 temp = temp->next;
 }
 cout << endl;
}
int main() {
 int numNodes, value, position, insertValue;
 cout<<"Enter the number of initial nodes to insert: ";
 cin>>numNodes;
 for (int i = 0; i < numNodes; i++) {
 cout<<"Enter value for node " << i + 1 << ": ";
 cin>>value;
 insert(value); 
 }
 cout<<"Enter the value to insert: ";
 cin>>insertValue;
 cout<<"Enter the position to insert the value: ";
 cin>>position;
 insertAtPosition(insertValue, position);
 print();
 return 0;
}
