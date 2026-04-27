#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int curr = arr[0], best = arr[0];
    for(int i = 1; i < n; i++){
        curr = max(arr[i], curr + arr[i]);
        best = max(best, curr);
    }
    return best;
}

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = 9;
    cout << kadane(arr, n);
}