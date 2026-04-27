#include <iostream>
using namespace std;
int check_isSorted(int arr[] ,int n){
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            // cout<<arr[i]<<" "<<arr[i+1];
            return -1;
            
        }
        
    }
    return 1;   
}
int main(){
    int arr[5]={2,23,4,5,6};
    int n=5;
    cout<<check_isSorted(arr,n);
    return 0;
}


