#include <bits/stdc++.h>
using namespace std;
struct Mystack{
    vector <int> v;
    void Push(int x){
        v.push_back(x);
    }
    int Pop(){
        int rev =v.back();
        v.pop_back();
        return rev;
    }
    int peeek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
};
int main(){
    Mystack s;
    s.Push(3);
    s.Push(2);
    s.Push(8);
    s.Push(1);
    s.Push(6);
    s.Push(11);
    s.Push(43);
    cout<<"Elements are insered into stack : \n"
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.Pop()<<endl;
    cout<<s.peeek()<<endl;
    cout<<s.size()<<endl;
    return 0;
}