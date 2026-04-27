#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,3,8,8,3};
    int n=5;
    cout<<"Array before sort \n";
    for(int x:arr){
        cout<<x<<" ";
    }
    int i,j;
    for (int i = 0; i < n; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)                    //Time complexity : O(n2) 
            if (arr[j]<arr[min])                         //selection sort is not stable
                min=j;     
            swap(arr[i],arr[min]);       
    }
    cout<<"After  insertion sort \n ";
    for(int x: arr){
        cout<<x<<" ";
    }
   return 0;
}