#include <bits/stdc++.h>
using namespace std;
int Reverse_Array(int arr[], int n){
    int low=0, heigh=n-1;
    while (low<heigh)
    {
        int temp=arr[low];
        arr[low]=arr[heigh];
        arr[heigh]=temp;
        low++;
        heigh--;
    }    
    
}
int main(){
    int arr[5]={1,2,3,4};
    int n=5;
    cout<<"Before Reverse: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    Reverse_Array(arr,n);
    cout<<"\nAfter Reverse:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}