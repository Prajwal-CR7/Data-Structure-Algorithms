#include<iostream>
using namespace std;
void  prime_factor(int n){
        if (n<=1)
        {
            return;
        }
        while (n%2==0)
        {
            cout<<2<<" ";
            n/=2;
        }
        while (n%3==0)
        {
            cout<<3<<" ";
            n/=3;
        }
        //i = 5; i += 6 (the pattern 5, 11, 17, 23, 29, …) in the prime-factorization loop.
        for (int i = 5; i*i<=n ; i+=6)
        {
            while (n%i==0)
            {
                cout<< i<<" ";
                n/=i;
            }
            while (n%(i+2)==0)
            {
                cout<<i+2<<" ";
                n/=(i+2);
            }
        }   
        //The leftover is always prime because:You remove all small prime factors up to √n.A composite number must have a factor ≤ √n
        if (n>3)
        {
            cout<<n<<" ";
        cout<<endl;
        }
}
int main(){
     int n;
     cin>>n;
     prime_factor(n);
     return 0;
}


