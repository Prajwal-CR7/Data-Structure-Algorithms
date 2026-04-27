#include <bits/stdc++.h>
using namespace std;
void hipify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if (left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
    if (right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if (largest!=i)
    {
        swap(arr[i],arr[largest]);
        hipify(arr,n,largest);
    }
}
void build_heap(int arr[],int n){
    for (int i = n/2-1; i >= 0 ; i--)
    {
        hipify(arr,n,i);
    }
    
}
void heap_Sort(int arr[],int n){
    build_heap(arr,n);
    for (int i = n-1; i >0; i--)
    {
        swap(arr[0],arr[i]);
        hipify(arr,i,0);
    }
}
int main(){
    int arr[5]={28,6,3,5,32};
    int n=5;
    cout<<"Before sorting \n";
    for(int x: arr){cout<<x<<" ";}
    heap_Sort(arr,n);
    cout<<"After Heap sorting \n";
    for(int x: arr){cout<<x<<" ";}
    return 0;
}
