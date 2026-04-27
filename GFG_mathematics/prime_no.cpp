// #include<iostream>
// using namespace std;
// int prime_no(int n){
//    if (n==1){
//       return false;
//    }
//    for (int i = 2; i <n; i++)
//    {
//       if (n%i==0)
//       {
//          return false;
//       }   
//    }
//    return true;
// }
// int main(){
//    int n;
//    cin>>n;
//    cout<<prime_no(n);

// }
/*    
*************Efficient code for prime number is as follows*/

#include<iostream>
using namespace std;
bool prime(int n){
   if (n==1)
   {
      return false;
   }
   if (n==2 ||n==3)
   {
      return true;
   }
    
   if (n%2==0 || n%3==0)
   {
      return false;
   }
   for (int i = 5; i*i <=n; i+=6)
   {
      if (n%i==0 || n%(i+2)==0)
      {
         return false;
      }
   }
   return true;
   
}
int main(){
   int n =17;
   cout<<prime(n);
}

