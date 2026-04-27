#include <bits/stdc++.h>
using namespace std;
int Binary_search(int arr[],int n, int x){
    int low=0,heigh=n-1;
    while (low<=heigh)       
    {
        int mid=(low+heigh)/2;
        if (arr[mid]==x)
        {
            return mid;
        }else if (arr[mid]>x)
        {
            heigh=mid-1;
        }else 
        {
            low=mid+1;
        }
    }
    return -1;
    
}
int main(){
    int arr[5]={2,3,6,9,53};
    int n=5,x=53;
    cout<<Binary_search(arr,n,x);
    return 0;
}