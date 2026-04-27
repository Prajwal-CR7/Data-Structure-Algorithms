/*LCM == List of 2 number
  the first block of code is for GCD
  the formula to LCM is 
  a*b=gcd(a,b)*lcm(a,b)
  so LCM = a*b/gcd(a,b) */
#include<iostream>
using namespace std;
int GCD(int a,int b){
    if (b==0){
        return a;
    }
    return GCD(b,a%b);
}
int LCM(int a, int b){
    return (a*b)/GCD(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<LCM(a,b);
}


