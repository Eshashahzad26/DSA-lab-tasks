#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};
Node *head = NULL;
void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    if (head == NULL) {
        head = newNode;
        newNode->next = head; 
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode; 
    }
}


void deleteAtStart() {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }

    Node *temp = head;
    if (head->next == head) {
        head = NULL;
    } else {
        Node *last = head;
        while (last->next != head) {
            last = last->next;
        }
        head = head->next;
        last->next = head; 
    }
    delete temp;
}
void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }
if (pos == 1) {
        deleteAtStart(); 
        return;
    }

    Node *temp = head;
    Node *prev = NULL;
    for (int i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == head) {
        cout << "Invalid position" << endl;
        return;
    }
prev->next = temp->next;
    delete temp;
}
void deleteAtEnd() {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }
    if (head->next == head) { 
        delete head;
        head = NULL;
    } else {
        Node *temp = head;
        Node *prev = NULL;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head; 
        delete temp;
    }
}

void print() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    cout << "Elements in the list: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    insert(8);
    insert(6);
    insert(4);
    insert(2);
    insert(7);
    print();

    cout << "After deletion at start:" << endl;
    deleteAtStart();
    print();

    cout << "After deletion at position 3:" << endl;
    deleteAtPosition(2);
    print();

    cout << "After deletion at end:" << endl;
    deleteAtEnd();
    print();

    return 0;
}
