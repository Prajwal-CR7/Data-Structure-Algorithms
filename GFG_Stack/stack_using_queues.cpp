#include <bits/stdc++.h>
using namespace std;
struct stack_{
    queue<int> q1,q2;
    int curr;
    stack_(){

        curr=0;
    }
    void push(int x){
        curr++;
        q2.push(x);
        while (!q1.empty()) 
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q=q1; 
		q1=q2; 
		q2=q; 
    }
    int pop(){
        if(q1.empty()){return -1;}
        curr--;
        int x=q1.front();
        q1.pop();
        return x;
    }
    int size(){
        return curr;
    }
    int front(){
        if (q1.empty())
        {
            return -1;
        }
        
        return q1.front();
    }
};
int main(){
    stack_ s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(8);
    s.push(7);
    s.push(2);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
return 0;
}