#include<iostream>
using namespace std;
int Itrative_power(int n, int x){
    int run=1;
    while (n>0)
    {
        if (n%2!=0)
        {
            run=run*x;
        }
        x=x*x;
        n/=2;
    }
    return run;
}
int main(){
    int n,x;
    cin>>n>>x;
    cout<<Itrative_power(n,x);
 
}


