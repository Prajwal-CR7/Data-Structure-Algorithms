#include <bits/stdc++.h>
using namespace std;
int lommutto(int ar[],int l,int h){
    int i=l-1,j=0;
    int pivot=ar[h];
    for (int j = l; j < h; j++)
    {
        if (ar[j]<pivot)
        {i++;swap(ar[i],ar[j]);}   
    }swap(ar[i+1],ar[h]);
    return i+1;   
}
void QuickSort(int ar[],int l, int h){
    if (l<h)
    {
        int p=lommutto(ar,l,h);
        QuickSort(ar,l,p-1);
        QuickSort(ar,p+1,h);
    }
    
}
int main(){
    int ar[]={2,13,54,46,3,55};
    int l=0,h=5;
    cout<<"befor Sorting: \n";
    for(int x:ar){cout<<x<<" ";}
    QuickSort(ar,l,h);
    cout<<endl;
    cout<<"after Ouick Sort: \n";
    for(int x:ar){cout<<x<<" ";}
return 0;
}