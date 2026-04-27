
/*     solution for duplicate sorted array values*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {2,1,2,2,2};
    int n = 5;
    int res = 1;

    cout << "Before removing duplicates\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }

    cout << "\nAfter removing duplicates\n";
    for (int i = 0; i < res; i++) cout << arr[i] << " ";

    return 0;
}