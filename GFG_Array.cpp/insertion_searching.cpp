
#include<iostream>
using namespace  std;
int insert(int arr[],int n,int ele, int pos, int cap){
    if (cap==n)
    {
        return n;
    }
    int idx=pos-1;
    for (int i = n-1; i>=idx; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=ele;
    return n+=1;
}
int main(){
    int arr[10],n=3,ele=7,pos=2,cap=10;
    arr[0]=11,arr[1]=22,arr[2]=33;
    cout<<"Before insertion: \n";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    n=insert(arr,n,ele,pos,cap);
    cout<<"\nafter insertion: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }    
}