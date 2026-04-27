#include <bits/stdc++.h>
using namespace std;

void Unique_ele(int ar1[], int ar2[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {

        // skip duplicates in ar1
        if (i > 0 && ar1[i] == ar1[i - 1]) {
            i++;
            continue;
        }

        if (ar1[i] < ar2[j]) {
            i++;
        }
        else if (ar1[i] > ar2[j]) {
            j++;
        }
        else {
            cout << ar1[i] << " ";
            i++;
            j++;
        }
    }
}

int main(){
    int ar1[5]={1,2,3,4,5};
    int ar2[3]={2,3,4};
    int n=5,m=3;
    Unique_ele(ar1,ar2,n,m);
}