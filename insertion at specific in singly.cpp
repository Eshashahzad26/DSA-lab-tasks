#include <iostream>
using namespace std;
struct Node {
    int data;    
    Node* next; 
};

int main() {
    Node* head = new Node();  
    head->data = 10;
    head->next = new Node(); 
    head->next->data = 20;
    head->next->next = new Node(); 
    head->next->next->data = 30;
    head->next->next->next = nullptr;  
    int position = 2;  
    Node* newNode = new Node(); 
    newNode->data = 25;         

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 1; i < position - 1; ++i) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    return 0;
}
