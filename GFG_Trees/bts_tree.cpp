#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data ;
    struct Node *left;
    struct Node *right;
    Node(int n){
        left=NULL;
        right=NULL;
        data=n; 
    }

};
Node *insert(Node *root,int x){
    Node *curr=root;
    Node *parent=NULL;
    Node *temp=new Node (x);
    while (curr!=NULL)
    {
        parent=curr;
        if(curr->data>x){
            curr=curr->left;
        }
        else if(curr->data<x){
            curr=curr->right;
        }
        else{
            return root;
        }
    }
    if(parent==NULL){
        return temp;
    }
    if(parent->data>x){
        parent->left=temp;
    }else{
        parent->right=temp;
    }
    return root;
    
}
void printlevel(Node *root ,int k){
    if (root==NULL)
    {
        return ;
    }
    if (k==0)
    {
        cout<<root->data<<" ";
    }else{
        printlevel(root->left,k-1);
        printlevel(root->right,k-1);
    }
}
void inorder(Node *root ){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
    
}
int main(){
    Node *head=NULL;
    head=insert(head,11);
    head=insert(head,33);
    head=insert(head,10);
    // printlevel(head,1);
    inorder(head);
    cout<<"NULL";
    return 0;
}
 
