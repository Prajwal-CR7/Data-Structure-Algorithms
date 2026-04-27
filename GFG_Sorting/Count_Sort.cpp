#include <bits/stdc++.h>
using namespace std;
void COuntSort(int ar[],int n,int k){
    int arr[k];
    int count=0;
    for (int i = 0; i < k; i++)
    {
        arr[i]=0;
    }
    for (int  i = 0; i < n; i++)
    {
        arr[ar[i]]++;
    }
    int index=0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j <arr[i]; j++)
        {
            ar[index]=i;
            index++;
        }
    }
}
int main(){
    int ar[6]={3,3,2,2,1,0};
    int n=6,k=4;
    cout<<"before sorting \n";
    for(int x:ar){cout<<x<<" ";}
    cout<<endl;
    COuntSort(ar,n,k);
    cout<<"After sorting \n";
    for(int x:ar){cout<<x<<" ";}
    return 0;
}