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

void insertAtPos(int pos, int n) {
    Node* newnode = new Node;   // Allocate memory for new node
    newnode->data = n;          // Set data for the new node

    if (pos == 1) {  // If inserting at the head
        newnode->next = head;
        head = newnode;
        return;
    }

    Node* temp = head;
    
    // Traverse the list to find the position (one node before insertion)
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {  // If position is out of bounds
        cout << "Invalid position" << endl;
        delete newnode;  // Free allocated memory
        return;
    }

    // Insert the new node
    newnode->next = temp->next;
    temp->next = newnode;
}

void print() {
    Node* temp = head;
    cout << "Data elements in the linked list are: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    insert(9);

    print();

    insertAtPos(3, 15);  // Insert 15 at position 3
    print();             // Print the updated list

    insertAtPos(1, 20);  // Insert 20 at the head
    print();             // Print the updated list

    insertAtPos(10, 25); // Try inserting at an invalid position
    print();             // Print the final list

    return 0;
}
