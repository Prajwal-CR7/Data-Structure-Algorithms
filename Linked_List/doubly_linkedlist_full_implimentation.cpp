#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* priv;
    Node(int x){
        data=x;
        next=NULL;
        priv=NULL;
    }
};

Node *insert_at_beginning(Node *head ,int x){
    Node *curr=new Node(x);
    if (head==NULL)
    {
        return curr;
    }
    Node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=curr;
    curr->priv=temp;
    return head;
}
Node *printline(Node *head){
    Node *curr=head;
    while (curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
Node *reverse_list(Node *head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *priv=NULL;
    Node *curr=head;
    while (curr!=NULL)
    {
        priv=curr->priv;
        curr->priv=curr->next;
        curr->next=priv;
        curr=curr->priv;
    }
    return priv->priv;
}
Node *delete_atend(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }    
    Node *curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->priv->next=NULL;
    delete curr;
    return head;
}
Node *delete_at_beginning(Node *head){
    if (head==NULL)
    {
        return NULL;
    }
    Node * curr=head->next;
    delete head;
    return curr;
}
int main(){
    Node *head=NULL;
    head=insert_at_beginning(head ,21);
    head=insert_at_beginning(head ,22);
    head=insert_at_beginning(head ,23);
    head=insert_at_beginning(head ,24);
    head=insert_at_beginning(head, 25);
    cout<<"after insertin elements :";
    printline(head);
    cout<<endl;
    cout<<"Delette at end :";
    head=delete_atend(head);
    head=delete_atend(head);
    cout<<printline(head);
    cout<<endl;
    cout<<"Reverse the string :";
    head=reverse_list(head);
    printline(head);
    cout<<endl;
    head=delete_at_beginning(head);
    printline(head);
    return 0;
}








