#include <bits/stdc++.h>
using namespace std;
//function to get largest element 
int Largest_Element(int arr[],int n){
    int temp=0;
    for (int i = 1; i <n; i++)
    {
        if(arr[temp]<arr[i]){
            arr[temp]=arr[i];
        }
    }
    return temp;
}
//function to get second largest element using Largest_Element Function
int second_largest(int arr[],int n){
    int largest=Largest_Element(arr,n);
    int res=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[largest])
        {
            if (res==-1)
            {
                res=i;
            }else if(arr[i]>arr[res]){
                res=i;
            }

        }
        
    }
    return arr[res];
}
//optimal solution 
int secondLargestOptimal(int arr[], int n) {
    int largest = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (largest == -1 || arr[i] > arr[largest]) {
            second = largest;
            largest = i;
        } else if (second == -1 || arr[i] > arr[second]) {
            if (arr[i] != arr[largest])
                second = i;
        }
    }

    return arr[second];
}
int main(){
    int arr[5]={390,24,6,335,441};
    int n=5;
    cout<<second_largest(arr,n)<<endl;
    cout<<"Optimal solution answer: "<<secondLargestOptimal(arr,n);
    return 0;
}
