#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head = nullptr;
void insert(int n) {
    Node* newnode = new Node;    // Allocate memory for new node
    newnode->data = n;           // Set data of new node
    newnode->next = head;        // Link new node to the current head
    head = newnode;              // Make the new node the head
}

void print() {
    cout << "Data elements in the linked list are: ";
    Node* temp = head;           // Temporary pointer to traverse the list
    while (temp != nullptr) {     // Traverse until the end of the list
        cout << temp->data << " ";
        temp = temp->next;        // Move to the next node
    }
    cout << endl;
}

int main() {
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    insert(9);

    print();  // Call print to display the list

    return 0;
}
