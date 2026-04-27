#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;
int LeftMost(string str){
    int count[CHAR]={0};
    for (int i = 0 ; i <str.length(); i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]]>1)
        {
            return i;
            
        }
        
    }
    return -1;
}
int main(){
    string str= "prrajwal";
    cout<<LeftMost(str);
return 0;
}
/*
 for non repeating first element in string 
 */
// #include <bits/stdc++.h>
// using namespace std;
// const int CHAR=256;
// int LeftMost(string str){

//     int count[CHAR]={0};
//     for (int i = 0 ; i <str.length(); i++)
//     {
//         count[str[i]]++;
//     }
//     for (int i = 0; i < CHAR; i++)
//     {
//         if (count[str[i]]==1)
//         {
//             return i;
//             break;
//         }
        
//     }
//     return -1;
// }
// int main(){
//     string str= "pprajwal";
//     cout<<LeftMost(str);
// return 0;
// }

