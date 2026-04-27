#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = NULL;
    }
};

Node* delete_atend(Node* head) {
    if (head == NULL) return NULL;

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* curr = head;

    while (curr->next != NULL)
        curr = curr->next;

    curr->prev->next = NULL;   // FIXED
    delete curr;

    return head;
}

Node* delete_at_beginning(Node* head) {
    if (head == NULL) return NULL;

    Node* temp = head->next;
    delete head;

    if (temp != NULL)
        temp->prev = NULL;

    return temp;
}

void printline(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
    Node* head = new Node(33);
    Node* temp1 = new Node(31);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    temp1->prev = head;
    temp2->prev = temp1;

    printline(head);
    cout << endl;

    head = delete_at_beginning(head);

    cout << "after deleting at beginning: ";
    printline(head);

    return 0;
}