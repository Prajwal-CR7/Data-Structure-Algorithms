/* Index of first occurance using recurssion method*/
// #include <bits/stdc++.h>
// using namespace std;
// int Index_of_first_occurance_ele(int arr[], int low ,int heigh ,int x){
//     if (low>heigh) return -1;
//     int mid=(low+heigh)/2;
//     if (arr[mid]<x)
//     {
//         return Index_of_first_occurance_ele(arr,mid+1,heigh,x);

//     }else if (arr[mid]>x)
//     {
//         return Index_of_first_occurance_ele(arr,low,mid-1,x);

//     }else{
//         if (mid==0 || arr[mid-1]!=arr[mid] )
//         {
//             return mid;
//         }else{
//             return Index_of_first_occurance_ele(arr,low,mid-1,x);
//         }
        
//     }
    
    
    
// }
// int main(){
//     int arr[7]={1,2,2,3,3,4,7};
//     int x=3,n=7,low=0,heigh=n-1;
//     cout<<Index_of_first_occurance_ele(arr,low,heigh,x);
//     return 0;
// }
/* Index of first occurance using normal effective method*/
#include <bits/stdc++.h>
using namespace std;
int Index_of_first_occurance_ele(int arr[], int n,int x){
    int low=0,heigh=n-1;
    while (low<=heigh)
    {
        int mid=(heigh+low)/2;
        if (arr[mid]>x)
        {
            heigh=mid-1;
        }else if (arr[mid]<x)
        {
            low=mid+1;
        }
        else{
            if (mid==0 || arr[mid-1]!=arr[mid]) 
            {
                return mid;
            }
            else{
                heigh=mid-1;
            }            
        }    
    }
    return -1;
          
}
int main(){
    int arr[7]={1,2,2,3,3,4,7};
    int x=3,n=7;
    cout<<Index_of_first_occurance_ele(arr,n,x);
    return 0;
} 
/*          Index of last occurance    */
// #include <bits/stdc++.h>
// using namespace std;
// int Index_of_first_occurance_ele(int arr[], int n,int x){
//     int low=0,heigh=n-1;
//     while (low<=heigh)
//     {
//         int mid=(heigh+low)/2;
//         if (arr[mid]>x)
//         {
//             heigh=mid-1;
//         }else if (arr[mid]<x)
//         {
//             low=mid+1;
//         }
//         else{
//             if (arr[mid+1]!=arr[mid]) 
//             {
//                 return mid;
//             }
//             else{
//                 low=mid+1;
//             }            
//         }    
//     }
          
// }
// int main(){
//     int arr[7]={1,2,2,3,3,4,7};
//     int x=2,n=7;
//     cout<<Index_of_first_occurance_ele(arr,n,x);
//     return 0;
// } 
