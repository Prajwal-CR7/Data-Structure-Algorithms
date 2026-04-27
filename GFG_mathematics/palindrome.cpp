#include<iostream>
using namespace std;
void palindrome(int n){
   int rev=0;
   int palindrome_element=n;
   while (n>0){
      rev=rev*10+n%10;
      n=n/10;
   }
   if (rev==palindrome_element)
   {
         cout<<palindrome_element<<"  is palindrome ";
   }else{
         cout<<palindrome_element<<" is not a palindrome";
   }
   
   
}
int main()
{
   int n;
   cin>>n;
   palindrome(n);
   return 0;
}
