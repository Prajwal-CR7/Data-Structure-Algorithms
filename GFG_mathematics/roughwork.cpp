#include <bits/stdc++.h>
using namespace std;
class Hero{
    private:
       int bc;
       
       
    public:
     int a;
     Hero(int bc){
        cout<<"this -> adress"<<this<<endl;
    }
     int getbc(){
        return bc;
    }
     void setbc(int bc){
        this->bc=bc;
    }
     void print(){
        cout<<a;
    }
};
int main(){
    Hero pra(9);
    cout<<pra.print();
    Hero h1(22);
    h1.setbc(22);
    cout<<"bc adress:- "<<&h1 ;
    return 0;
}