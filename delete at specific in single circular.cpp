#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertEnd(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;

    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head;
    } else {
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}
void deleteNodeAtPosition(Node** head, int position) {
    if (*head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = *head;
    if (temp->next == *head && position == 1) {
        delete temp;
        *head = nullptr;
        return;
    }
    if (position == 1) {
        Node* last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        last->next = (*head)->next;
        *head = (*head)->next;
        delete temp;
        return;
    }
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == *head) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;

    delete nodeToDelete;
}
void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
int main() {
    Node* head = nullptr;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    cout << "Original List: ";
    printList(head);

    int position;
    cout << "Enter the position to delete: ";
    cin >> position;
    deleteNodeAtPosition(&head, position);

    cout << "Updated List: ";
    printList(head);

    return 0;
}
