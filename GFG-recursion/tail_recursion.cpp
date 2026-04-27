
/*   Tail  tail-recrussion*/
#include<iostream>
using namespace  std;
int fun(int n, int m){
    if (n==0 || n==1)
        return m;
    return fun(n-1,m*n);
}
int main(){
    int n,m;
    cin>>n;
    cout<<fun(n,1);
}
