#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {2, 5, 7, 4, 21, 3};
    int n = 6;

    cout << "Original: ";
    for (int x : arr) cout << x << " ";

    sort(arr, arr + n);

    cout << "\nAfter sort (asc): ";
    for (int x : arr) cout << x << " ";

    sort(arr, arr + n, greater<int>());

    cout << "\nAfter sort (desc): ";
    for (int x : arr) cout << x << " ";

    return 0;
}