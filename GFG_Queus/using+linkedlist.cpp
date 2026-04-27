#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct  Queues
{
    Node *front;
    Node *rare;
    int size;
    Queues(){
        size=0;
        front=NULL;
        rare=NULL;
    }
    void enque(int x){
        Node *temp= new Node(x);
        if (front==NULL){
            front=rare=temp;
        }else{
        rare->next=temp;
        rare=temp;
        }
        size++;
        
    }
    void deque(){
        if (front == NULL) return;
        Node *temp=front;
        front=front->next;
        delete temp;
        size--;
    }
    void print(){
        Node *curr=front;
        while (curr!=NULL)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        
    }

};

int main(){
    Queues q;
    q.enque(5);
    q.enque(6);
    q.enque(7);
    q.enque(8);
    cout<<"After enqueing  :";
    q.print();
    q.deque();
    cout<<endl;
    q.enque(10);
    cout<<"After dequeing  :";
    q.print();
return 0;
}