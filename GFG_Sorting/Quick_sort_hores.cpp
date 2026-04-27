#include <bits/stdc++.h>
using namespace std;
int partion(int ar[], int l, int h){
    int i=l-1,j=h+1;
    int pivot=ar[l];
    while (true)
    {
        do{i++;} while (ar[i]<pivot);
        do {j--;} while (ar[j]>pivot);
        if(i>=j)return j;
        swap(ar[i],ar[j]);
    }
    return i+1;
}


void Quicksort(int ar[], int l, int h)
{
    if (l<h)
    { 
        int p = partion(ar, l, h);
        Quicksort(ar, l, p);
        Quicksort(ar, p + 1, h);
    }
}
int main()
{
    int ar[5] = {12, 6, 43, 3, 5};
    int l = 0, h = 4;
    cout << "Before Quiclsort \n";
    for (int x : ar)
    {
        cout << x << " ";
    }
    Quicksort(ar, l, h);
    cout << "After sorting  \n";
    for (int x : ar)
    {
        cout << x << " ";
    }
    return 0;
}