#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(12);
    s.insert(4);
    s.insert(32);
    s.insert(90);
    s.insert(54);
    for (auto it = s.begin(); it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(12);
    auto it=s.find(4);
    s.erase(it);
        for (auto it = s.begin(); it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    if(s.find(54)==s.end()){cout<<"Not Found \n";}
    else{cout<<"Found \n"<<*(s.find(54))<<endl;}
    if(s.count(54)){cout<<"FOund \n";}else{cout<<"not found \n";}
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;


    return 0;
}