                    // you have give a string S1 and string S2 
                    // 1]s2 should be substring(subsequence) of s1 
                    // 2]s2  sequence of s2 should be in order 
                    
/*Itrative solution*/
/*#include <bits/stdc++.h>
using namespace std;
bool isSubSequence(string str1,string str2,int n,int m){
    int j=0;
    for (int i = 0; i < n && j<m; i++)
    {
        if (str1[i]==str2[j])
        {
            j++;
        }
        
    }
    return (j==m);
}
int main(){
    string str1="abcde";
    string str2="abd";
    int n=str1.length();
    int m=str2.length();
    cout<<isSubSequence(str1,str2,n,m);
return 0;
}

*/

/*Recuressive solution */
#include <bits/stdc++.h>
using namespace std;
bool isSubSequence(string str1,string str2,int n,int m){
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(str1[n-1]==str2[m-1]){
        return (isSubSequence(str1,str2,n-1,m-1));
    }else{
        return (isSubSequence(str1,str2,n-1,m));
    }
}
int main(){
    string str1="geeksoforgeek";
    string str2="gee";
    int n=str1.length();
    int m=str2.length();
    cout<<isSubSequence(str1,str2,n,m);
return 0;
}


