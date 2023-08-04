#include <iostream>

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int val, node* &head) {
    node* n = new node(val);
    if (head != NULL) {
        n->next = head;
        head->prev = n;
    }
    head = n;
}

void displayList(node* head) {
    node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    node* head = NULL;
    insertAtHead(5, head);
    insertAtHead(10, head);
    insertAtHead(15, head);

    std::cout << "Nodes inserted at head: ";
    displayList(head);

    return 0;
}
