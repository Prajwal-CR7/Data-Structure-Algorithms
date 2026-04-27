#include<iostream>
using namespace std;
void Prime(int a){
    int i;
    for (1; i*i <=a; i++)
        if (a%i==0)
        {
           cout<<i<<' ';
        }
        
    for ( ;  i>= 1; i--)
    
        if (a%i==0)
        {
            cout<<(a/i)<<" ";  
        }
}
int main(){
    int a=88;
    Prime(a);
}
// #include<iostream>
// using namespace std;
// void All_divisors_of_number(int n){
//     for (int i=1;i*i<=n;i++) {
//         if(n%i==0){
//             cout<<i<<" ";
//             if (i!=n/i)
//                  cout<<n/i<<" ";
//         }
        
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     All_divisors_of_number(n);
// }
/*Divisors will print in random manner.
 For more efficient code will use following technique*/
