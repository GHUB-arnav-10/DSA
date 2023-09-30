#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverse(Node* head) {
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

Node* insert(Node* head, int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = nullptr;

    if (head == nullptr) {
        head = temp;
    } else {
        Node* temp1 = head;
        while (temp1->next != nullptr) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }

    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    head = insert(head, 3);
    head = insert(head, 7);
    head = insert(head, 9);
    head = insert(head, 14);

    cout << "Original Linked List: ";
    print(head);

    head = reverse(head);

    cout << "Reversed Linked List: ";
    print(head);

    return 0;
}
