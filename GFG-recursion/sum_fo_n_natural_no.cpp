#include <iostream>
using namespace  std;
void  recurssive_fun(int n){
    if (n==0)
        return;
    cout<<n<<endl;
    recurssive_fun(n-1);    
    cout<<n<<endl;
}
int main(){
    int x;
    cin>>x;
    recurssive_fun(x);
    return 0;
}