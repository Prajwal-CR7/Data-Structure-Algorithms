#include <bits/stdc++.h>
using namespace std;
void searchPattern(string &txt, string &pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=(n-m);i++){
        int j;
        for( j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        if(m==j)
        cout<<i<<' ';   
    }
}
int main(){
    string str1="prajwaldhumalpra";
    string str2="pra";
    cout<<"All index are "<<" ";
    searchPattern(str1,str2);
    return 0;
}