#include <bits/stdc++.h>
using namespace std;
struct MYStack
{
    int *arr;
    int cap;
    int top;
    MYStack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
void Push_into_stack(int x){
    if(top==cap-1){

        cout<<"Stack is full: \n";
        return; 
    }
    top++;
    arr[top]=x;
    
}
int pop_item(){
    if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
    int res=arr[top];
    top--;
    return res;
    
}
int peek(){
    if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
    int rev=arr[top];
    return rev;
}
int size(){
    return top+1;
}
};
int main()
{
    MYStack s(6);
    s.Push_into_stack(4);
    s.Push_into_stack(3);
    s.Push_into_stack(5);
    s.Push_into_stack(6);
    cout<<"elements are inserted into stack: \n";
    cout<<s.pop_item()<<endl;
    cout<<s.pop_item()<<endl;
    // cout<<s.pop_item()<<endl;
    cout<<s.peek()<<endl;
    cout<<"Size= "<<s.size()<<endl;
}