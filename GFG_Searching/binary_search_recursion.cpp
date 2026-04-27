#include <bits/stdc++.h>
using namespace std;
int Binary_search(int arr[], int low,int heigh,int x){
    if (low>heigh) return -1;
    int mid=(low+heigh)/2;
    if (arr[mid]==x)
    {
        return mid;
    }else if (arr[mid]>x)
    {
        return Binary_search(arr,low,mid-1,x);
    }else{
        return Binary_search(arr,mid+1,heigh,x);
    }    
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int low =0,heigh=n-1,x=4;
    cout<<Binary_search(arr,low,heigh,x);
    return 0;
}