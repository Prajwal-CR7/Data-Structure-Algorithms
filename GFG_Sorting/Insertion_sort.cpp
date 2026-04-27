#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={80,41,21,66,1,42};
    int n=6;
    cout<<"Before sorting \n";
    for(int x: arr){
        cout<<x<<" ";
    }
    for (int i = 1; i < n; i++)
    {
        int j=i-1;
        int temp=arr[i];
        while (j>=0 and arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"After insertion Sort"<<"\n";
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}