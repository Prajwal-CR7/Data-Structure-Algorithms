#include <bits/stdc++.h>
using namespace std;
const int CHAR=256 ;
bool isAnagram(string str1,string str2){
    if (str1.length()!=str2.length()){return false; }
    int count[CHAR]={0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;

    }
    for (int i = 0; i < CHAR; i++)
    {
        if(count[i]!=0){return false;}
    }
    return true;
}
int main(){
    string s1="seee";
    string s2="esee";
    if(isAnagram(s1,s2))
        cout<<"two strings are anagram ";
    else
        cout<<"two strings are not anagram";
    return 0;
}