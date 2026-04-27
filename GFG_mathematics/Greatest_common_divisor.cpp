// #include<iostream>
// using namespace std;
// int GCD(int a,int b){

//     int run=min(a,b);
//     while (run>0)
//     {
//         if(a%run==0 && b%run==0){
//             break;
//         } else{
//             run--;
//         }

//     }
//     return run;
    
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<GCD(a,b);
// }
/*
******************the effectic solution to GCd is as follow
*/
// #include<iostream>
// using namespace std;
// int GCD(int a,int b){
//     while (a!=b)
//     {
//         if (a>b){
//             a=a-b;
//         }else{
//             b=b-a;
//         }
        
//     }return a;   /*return either a or b */
    
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<GCD(a,b);
// }
/*   **************Another recurssive trick (best  one)*/
#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if (b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}   
int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
}

