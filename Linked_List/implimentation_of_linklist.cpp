#include <bits/stdc++.h>
using namespace std;

struct Node {
    int Data;
    Node* next;
    Node(int x) {
        Data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    Node *curr = head;

    while (curr != NULL) {
        cout << curr->Data << " ";
        curr = curr->next;
    }

    cout << endl;

    // Safe sum of first two nodes
    if (head != NULL && head->next != NULL) {
        int sum = head->Data + head->next->Data;
        cout << "Sum of first two nodes: " << sum;
    } else {
        cout << "List has fewer than 2 nodes";
    }
}

int main() {
    Node *head = new Node(20);
    head->next = new Node(21);
    head->next->next = new Node(22);

    printlist(head);
    return 0;
}