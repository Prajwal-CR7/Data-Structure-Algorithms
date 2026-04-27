#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

// returns height, updates diameter
int solve(Node* root, int &diameter) {
    if (root == NULL) return 0;

    int lh = solve(root->left, diameter);
    int rh = solve(root->right, diameter);

    // update diameter at this node
    diameter = max(diameter, lh + rh);

    // return height
    return 1 + max(lh, rh);
}

int diameterOfTree(Node* root) {
    int diameter = 0;
    solve(root, diameter);
    return diameter;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout << "Diameter = " << diameterOfTree(root);

    return 0;
}