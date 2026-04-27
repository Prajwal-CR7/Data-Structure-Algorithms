#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *insert_at_beginning(Node *head, int x) {
    Node *curr = new Node(x);
    curr->next = head;
    return curr;
}

void printlinkedlist(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *insert_at_end(Node *head, int x) {
    if (head == NULL) {
        return new Node(x);
    }

    Node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new Node(x);
    return head;
}

Node *insert_inbetween(Node *head, int pos, int x) {
    Node *temp = new Node(x);

    if (pos == 1) {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++) {
        curr = curr->next;
    }

    if (curr == NULL) {
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

Node *Delete_at_end(Node *head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node *curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    delete curr->next;
    curr->next = NULL;
    return head;
}

Node *delete_at_beginning(Node *head) {
    if (head == NULL) {
        return NULL;
    }

    Node *curr = head->next;
    delete head;
    return curr;
}

int search(Node *head, int x) {
    int pos = 1;
    Node *curr = head;

    while (curr != NULL) {
        if (curr->data == x)
            return pos;

        pos++;
        curr = curr->next;
    }
    return -1;
}

int main() {
    Node *head = NULL;

    head = insert_at_beginning(head, 22);
    head = insert_at_beginning(head, 33);
    head = insert_at_beginning(head, 33);

    cout << "Linked list after inserting at beginning: ";
    printlinkedlist(head);
    cout << endl;

    cout << "Linked list after inserting at end: ";
    head = insert_at_end(head, 44);
    printlinkedlist(head);
    cout << endl;

    cout << "Linked list after deleting element at end: ";
    head = Delete_at_end(head);
    printlinkedlist(head);
    cout << endl;

    cout << "Linked list after deleting at beginning: ";
    head = delete_at_beginning(head);
    printlinkedlist(head);
    cout << endl;

    cout << "Searching 22 in linked list: ";
    cout << search(head, 22) << endl;

    cout << "Searching 2 in linked list: ";
    cout << search(head, 2) << endl;

    return 0;
}