#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printLinklist(Node *head){
    if (head==NULL)
        return;

    Node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr!=head);
}

Node *insert_at_beginning(Node *head,int x){
    Node *temp=new Node(x);

    if (head==NULL)
    {
        temp->next=temp;
        return temp;
    }

    Node *curr=head;
    while (curr->next!=head)
    {
        curr=curr->next;
    }

    curr->next=temp;
    temp->next=head;

    return temp;
}

Node *insert_at_end(Node *head , int x){
    Node *temp=new Node(x);

    if (head==NULL)
    {
        temp->next=temp;
        return temp;
    }

    Node *curr=head;
    while (curr->next!=head)
    {
        curr=curr->next;
    }

    curr->next=temp;
    temp->next=head;

    return head;
}

Node *delete_at_end(Node *head){
    if(head==NULL){return NULL;}
    if(head->next==head){
        delete head;
        return NULL;
    }

    Node *curr=head;
    while (curr->next->next!=head)
    {
        curr=curr->next;
    }

    Node *temp=curr->next;   // FIXED
    curr->next=head;
    delete temp;

    return head;
}

Node *delete_head(Node *head){
    if (head==NULL) {return NULL;}
    if(head->next==head){
        delete head;
        return NULL;
    }

    Node *curr=head;
    while (curr->next!=head)
    {
        curr=curr->next;
    }

    Node *temp=head;
    curr->next=head->next;
    delete temp;

    return (curr->next);
}

Node *delete_at_index(Node *head,int pos){
    if(head==NULL){return NULL;}
    if(pos==1){return delete_head(head);}

    Node *temp=head;

    for (int i =1; i<pos-1; i++)
    {
        temp=temp->next;
    }

    Node *curr=temp->next;
    temp->next=curr->next;   // FIXED
    delete curr;

    return head;
}

int main(){

    Node *head=NULL;

    head=insert_at_beginning(head,22);
    head=insert_at_beginning(head,33);
    head=insert_at_beginning(head,44);
    head=insert_at_beginning(head,55);

    cout<<"after insertin at beginning: ";
    printLinklist(head);

    cout<<endl;

    head=insert_at_end(head ,99);
    cout<<"after insertin at end: ";
    printLinklist(head);

    cout<<endl;

    head=insert_at_beginning(head,55);
    cout<<"after insertin at beginning: ";
    printLinklist(head);

    cout<<endl;

    cout<<"After deleting end node: ";
    head=delete_at_end(head);
    printLinklist(head);

    cout<<endl;

    cout<<"After deleting head node: ";
    head=delete_head(head);
    printLinklist(head);

    cout<<endl;

    cout<<"After deleting node at kth index: ";
    head=delete_at_index(head,2);
    printLinklist(head);

    return 0;
}