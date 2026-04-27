#include <bits/stdc++.h>
using namespace std;
const int  m=3,n=2;
void print(int **arr){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    
    int *arr[m];
    for (int i = 0; i < m; i++)
    {
        arr[i]=new int [n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=i+j;
        }   
    }
    print(arr);
return 0;
}