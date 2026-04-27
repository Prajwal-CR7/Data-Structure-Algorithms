#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={2,3,22,5,3};
int n=5;
cout<<"array befor sort \n";
for(int x:arr){                                          //Time Complexity: O(n2)
    cout<<x<<" ";                                        //bubble sort is stable
}
for (int i = 0; i < n; i++)
{
    bool swapped=false;
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
        
    }if (!swapped)
    {
        break;
    }
    
}
cout<<endl;
cout<<"Arrayy after sort"<<"\n";
for(int x:arr){
    cout<<x<<" ";
}
return 0;
}