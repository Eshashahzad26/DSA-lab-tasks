#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to delete the last node of the linked list
void deleteLastNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    if (head->next == nullptr) {
        // If there's only one node in the list
        delete head;
        head = nullptr;
        return;
    }

    // Traverse the list to find the second last node
    Node* secondLast = head;
    while (secondLast->next->next != nullptr) {
        secondLast = secondLast->next;
    }

    // Delete the last node
    delete secondLast->next;
    secondLast->next = nullptr;
}

// Function to append a node to the linked list
void append(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = newNode;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "null" << endl;
}

int main() {
    Node* head = nullptr;

    // Adding nodes to the linked list
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);

    cout << "Original Linked List: ";
    printList(head);

    // Deleting the last node
    deleteLastNode(head);

    cout << "Linked List after deleting the last node: ";
    printList(head);

    return 0;
}
