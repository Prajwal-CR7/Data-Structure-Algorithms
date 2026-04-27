#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data ;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Mystack{
    Node *head;
    int size;
    Mystack(){
        head=NULL;
        size=0;
    }
void Push(int x){
    Node *temp=new Node(x);
    temp->next=head;
    head=temp;
    size++;

}
int Pop(){
    if(head==NULL){return 0;}
    int res=head->data;
    Node *curr=head;
    head=head->next;
    delete curr;
    size--;
    return res;
}
bool is_empty(){
    return head==NULL;
}
int peak(){
    if(head==NULL){return INT_MIN;}
    return head->data;
}
int Size(){
    return size;
}
};
int main(){
    Mystack s;
    cout<<s.Pop()<<endl;
    s.Push(22);
    s.Push(23);
    s.Push(24);
    s.Push(25);
    cout<<s.Pop()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.is_empty()<<endl;
    cout<<s.peak()<<endl;
    return 0;
}
