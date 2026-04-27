// #include <bits/stdc++.h>
// using namespace std;
// void revers_e(string str,int n){
//     int start=0;
//     for (int end = 0; end < n-1; end++)
//     {
//         if (str[end]==' ')
//         {
//             reverse(str.begin()+start,str.begin()+end-1);
//         }
//         start=end+1;       
//     }
//     reverse(str.begin()+start,str.begin()+n-1);
//     reverse(str.begin()+0,str.begin()+n-1);
//     cout<<str;
// }
// int main(){
    // string str="prajwal bhaskar dhumal";
//     int n=str.length();
//     revers_e(str,n);
//     return 0;
// } 
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "prajwal bhaskar";
    string ans="";
    for(int i=s.length()-1 ;i>=0;i--){
        ans=ans+s[i];
    }    
    cout<<ans;
    return 0;
}